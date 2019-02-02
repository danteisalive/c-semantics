module CPP-TRANSLATION-DECL-INITIALIZER-SYNTAX
     imports BASIC-K
     imports LIST
     imports SYMLOC-SORTS
     imports CPP-DYNAMIC-SORTS
     imports CPP-SORTS
     imports CPP-TYPING-SORTS

     syntax Expr ::= figureInit(base: Expr, destT: CPPTypeExpr, init: Init, type: InitType)
                   | figureConstructorInit(base: Expr, destT: CPPTypeExpr, init: Init, constructorType: Bool)

     syntax Expr ::= valueInit(base: Expr, CPPType)
                   | defaultConstructorInit(base: Expr, CPPTypeExpr, constructorType: Bool)
                   | zeroInit(base: Expr, type: CPPType)

     syntax KResult ::= functionDef(SymBase, Stmt)

     syntax KResult ::= "ill-formed"

     syntax TypeMap ::= stripExplicit(TypeMap) [function]
endmodule

module CPP-TRANSLATION-DECL-INITIALIZER
     imports CPP-TRANSLATION-DECL-INITIALIZER-SYNTAX
     imports C-CONFIGURATION
     imports K-REFLECTION
     imports STRING
     imports COMMON-SYNTAX
     imports SYMLOC-SYNTAX
     imports CPP-ABSTRACT-SYNTAX
     imports CPP-CLASS-SYNTAX
     imports CPP-CONVERSION-SYNTAX
     imports CPP-TRANSLATION-DECL-CLASS-SYNTAX
     imports CPP-DYNAMIC-SYNTAX
     imports CPP-TRANSLATION-ELABORATOR-SYNTAX
     imports CPP-MEMORY-READING-SYNTAX
     imports CPP-TRANSLATION-OVERLOADING-SYNTAX
     imports CPP-SYNTAX
     imports CPP-TYPE-MAP-SYNTAX
     imports CPP-TYPING-SYNTAX
     imports CPP-TRANSLATION-TYPING-EXPR-SYNTAX
     imports CPP-TRANSLATION-VALUE-CATEGORY-SYNTAX
     imports CPP-EXPR-MEMBERS-SYNTAX
     imports C-SETTINGS

     rule figureInit(Base::Expr, DestT::CPPTypeExpr, Init::Init, Type::InitType) => #figureInit(Base, DestT, Type, Init, Init, Init, NoConstructorInit)

     rule figureConstructorInit(Base::Expr, DestT::CPPTypeExpr, Init::Init, Type::Bool) => #figureInit(Base, DestT, DirectInit(), Init, Init, Init, ConstructorInit(Type))

     syntax Expr ::= #figureInit(base: Expr, destT: CPPTypeExpr, type: InitType, init: Init, srcT: K, srcCat: K, ConstructorType)
                   | constructorInit(LVal, InitType, Class, List, ConstructorType)
                   | defaultInit(base: Expr, CPPTypeExpr, ConstructorType)
                   | #valueInit(base: Expr, CPPType, ConstructorType)
                   | #zeroInit(base: Expr, CPPType, ConstructorType)

     rule valueInit(Base::Expr, T::CPPType) => #valueInit(Base, T, NoConstructorInit)

     rule zeroInit(E::Expr, T::CPPType) => #zeroInit(E, T, NoConstructorInit)

     rule defaultConstructorInit(Base::Expr, T::CPPTypeExpr, IsBaseClass::Bool) => defaultInit(Base, T, ConstructorInit(IsBaseClass))

     syntax ConstructorType ::= "NoConstructorInit" | ConstructorInit(Bool)

     context #figureInit(... base: HOLE:Expr) [result(LVal)]

     context #valueInit(... base: HOLE:Expr) [result(LVal)]

     context #zeroInit(... base: HOLE:Expr) [result(LVal)]

     context defaultInit(... base: HOLE:Expr) [result(LVal)]

     context #figureInit(... srcT: HOLE:TypeExpr => typeof(HOLE)) [result(CPPType)]

     context #figureInit(... srcCat: HOLE:CatExpr => catof(HOLE)) [result(ValueCategory)]

     rule <k> #figureInit(... init: ExprLoc(L::CabsLoc, I::Init) => I) ...</k>
          <curr-tr-program-loc> _ => L </curr-tr-program-loc>

     // 8.5:6.1
     rule #zeroInit(Base:LVal, T:CPPScalarType, _) => le(Base, trace(Base), T) :=init interpret(prv(0, noTrace, T))

     // 8.5:6.2
     rule <k> #zeroInit(Base:LVal, t(_, _, classType(C::Class)) #as T:CPPClassType, _) => zeroInitClass(Base, T, Bases, NSDM, noExpr /* Base*/) ...</k>
          <class-id> C </class-id>
          <base-classes> Bases::List </base-classes>
          <non-static-data-members> NSDM::List </non-static-data-members>

     // 8.5:6.3 TODO

     // 8.5:6.4
     rule #zeroInit(Base:LVal, T:CPPArrayType, IsConstructor::ConstructorType) => initEachElement(Base, T, IsConstructor, #klabel(`#zeroInit`), 0, noExpr)

     // 8.5:6.5 TODO

     syntax KItem ::= zeroInitClass(LVal, CPPClassType, bases: List, nsdm: List, init: MaybeExpr)

     rule zeroInitClass(Base:LVal, _, .List, .List, noExpr) => .K

     rule zeroInitClass(Base:LVal, _, .List, .List, E:Expr) => E

     rule (.K => evalMany(ListItem(zeroInitBaseClass(Base, type(classType(BaseCl::Class)))), .List))
          ~> zeroInitClass(Base:LVal, _, (ListItem(BaseCl::Class) => .List) _, _, _)

     syntax KItem ::= zeroInitBaseClass(base: LVal, baseType: CPPClassType)

     rule zeroInitBaseClass(Base:LVal, B:CPPClassType) => zeroInit(le(getBaseClassSubobject(Base, B), noTrace, B), B)

     rule <k> (.K => evalMany(ListItem(zeroInit(Base . no-template Name(C, X), T)) zeroInitClassPadding(Base, NAOffset, Offset), .List))
               ~> zeroInitClass(Base:LVal, t(_, _, classType(C::Class)), .List, (ListItem(Class.DataMember(X::CId, T::CPPType)) => .List) _, _)
          ...</k>
          <class-id> C </class-id>
          <cenv>... X |-> (_::CPPType |-> classOffset(NAOffset::Int, Offset::Int)) ...</cenv>

     syntax KItem ::= evalMany(List, List)

     rule (.K => K) ~> evalMany((ListItem(K:KItem) => .List) _, _)

     rule (V:Val => .K) ~> evalMany(_, (.List => ListItem(V)) _)

     rule evalMany(.List, .List) => .K

     rule evalMany(.List, (ListItem(V:Val) => .List) _) ~> zeroInitClass(_, _, _, _, (E::MaybeExpr => compoundInitJoin(E, V)))

     syntax List ::= zeroInitClassPadding(LVal, Int, Int) [function]

     rule zeroInitClassPadding(_, NAOffset::Int, Offset::Int) => .List
          requires NAOffset ==Int Offset

     rule zeroInitClassPadding(Base::LVal, NAOffset::Int, Offset::Int)
          => ListItem(zeroInitClassPadding2(Base, NAOffset, type(arrayType(type(char), (Offset -Int NAOffset) /Int cfg:bitsPerByte))))
          requires NAOffset <Int Offset

     syntax Expr ::= zeroInitClassPadding2(LVal, Int, CPPType) [function]

     rule zeroInitClassPadding2(Base::LVal, NAOffset::Int, T::CPPType) => zeroInit(fieldExp(Base, T, NAOffset), T)

     // 8.5:12
     rule #figureInit(Base:LVal, DestT::CPPType, _, NoInit(), _, _, IsConstructor::ConstructorType)
          => defaultInit(Base, DestT, IsConstructor)

     // 8.5:7.1 (class type)
     rule defaultInit(Base:LVal, t(... st: classType(C::Class)), IsConstructor::ConstructorType) => constructorInit(Base, DirectInit(), C, .List, IsConstructor)

     // 8.5:7.2 (array of classes)
     rule defaultInit(Base:LVal, T:CPPArrayType, IsConstructor::ConstructorType) => initEachElement(Base, T, IsConstructor, #klabel(`defaultInit`), 0, noExpr)
          requires isCPPClassType(getMostDerivedArrayElement(T))

     // 8.5:7.2-7.3 (non-class, non-array-of-classes)
     rule defaultInit(Base:LVal, T::CPPType, _) => Base
          requires notBool isCPPClassType(getMostDerivedArrayElement(T))
               andBool notBool isCPPRefType(T)

     // 8.5:8.1 (class with no defaulted default constructor)
     rule #valueInit(Base:LVal, T:CPPClassType, IsConstructor::ConstructorType) => defaultInit(Base, T, IsConstructor)
          requires (notBool hasConstructorThat(T, #klabel(`isDefaultConstructor`)))
               orBool hasConstructorThat(T, #klabel(`isUserProvidedDefaultConstructor`))
               orBool hasConstructorThat(T, #klabel(`isDeletedDefaultConstructor2`))

     syntax Expr ::= strictCompoundInit(Expr, Expr) [strict]

     rule strictCompoundInit(V1:Val, V2:Val) => compoundInit(V1, V2)

     // 8.5:8.2 (class without user-provided or deleted default constructor)
     rule #valueInit(Base:LVal, T:CPPClassType, IsConstructor::ConstructorType)
          => #if hasConstructorThat(T, #klabel(`isNonTrivialDefaultConstructor`)) #then
               strictCompoundInit(zeroInit(Base, T), defaultInit(Base, T, IsConstructor))
          #else
               zeroInit(Base, T)
          #fi
          requires (notBool hasConstructorThat(T, #klabel(`isUserProvidedDefaultConstructor`)))
               andBool (notBool hasConstructorThat(T, #klabel(`isDeletedDefaultConstructor2`)))

     // 8.5:8.3 (array)
     rule #valueInit(Base:LVal, T:CPPArrayType, IsConstructor::ConstructorType) => initEachElement(Base, T, IsConstructor, #klabel(`#valueInit`), 0, noExpr)

     // 8.5:8.4 (non-class, non-array)
     rule #valueInit(Base:LVal, T::CPPType, _) => zeroInit(Base, T)
          requires notBool isCPPClassType(T)
               andBool notBool isCPPArrayType(T)
               andBool notBool isCPPRefType(T)

     syntax Expr ::= initEachElement(LVal, CPPArrayType, ConstructorType, K, Int, initExp: MaybeExpr)

     rule (.K => Lbl(Base[prv(I, noTrace, t(noQuals, .Set, size_t))], T, IsConstructor))
          ~> initEachElement(Base::LVal, t(... st: arrayType(T::CPPType, N::Int)), IsConstructor::ConstructorType, #klabel(Lbl:KLabel), I::Int => I +Int 1, _)
          requires I <Int N

     rule (V:Val => .K) ~> initEachElement(... initExp: E::MaybeExpr => compoundInitJoin(E, V))

     rule initEachElement(Base::LVal, t(... st: arrayType(_, N::Int)), _, _, N, E::MaybeExpr) => compoundInitJoin(E, Base)

     // 8.5:17.1 (list initializer)
     rule #figureInit(Base:LVal, DestT::CPPType, Type::InitType, BraceInit(L::List), _, _, CT::ConstructorType)
          => listInit(Base, DestT, Type, L, CT)

     // 8.5:17.2 (reference destination type)
     rule #figureInit(Base:LVal, DestT:CPPRefType, _, E:Expr, _, _, _)
          => bindReference(le(Base, trace(Base), DestT), E)

     // 8.5:17.3 (string literal)
     rule #figureInit(Base:LVal, DestT:CPPArrayType, _, StringLiteral(Kind::CharKind, S::String), _, _, _)
          => strInit(Base, DestT, Kind, S, 0, noExpr)
          requires isCPPCharType(innerType(DestT))
               orBool isCPPWideCharType(innerType(DestT))

     // 8.5:17.4 (value init)
     rule #figureInit(Base:LVal, DestT::CPPType, _, ExpressionList(.List), _, _, IsConstructor::ConstructorType)
          => #valueInit(Base, DestT, IsConstructor)

     // 8.5:17.6.1 (direct init or copy init from derived class)
     rule #figureInit(Base:LVal, t(... st: classType(DestC::Class)) #as DestT::CPPClassType, Type::InitType, E:Expr, SrcT::CPPType, _, IsConstructor::ConstructorType)
          => constructorInit(Base, Type, DestC, ListItem(E), IsConstructor)
          requires Type ==K DirectInit() orBool (isCPPClassType(SrcT) andBool isBaseClassOf(DestT, {SrcT}:>CPPClassType))

     rule #figureInit(Base:LVal, t(... st: classType(DestC::Class)), DirectInit(), ExpressionList(L::List), _, _, IsConstructor::ConstructorType)
          => constructorInit(Base, DirectInit(), DestC, L, IsConstructor)
          requires size(L) >Int 0


     // expression initializer, non-class type
     rule #figureInit(Base:LVal, DestT::CPPType, _, E:Expr, SrcT:CPPType, SrcCat:ValueCategory, _)
          => #if canConvertWithStandardConversion(DestT, SrcT, SrcCat) #then le(Base, trace(Base), DestT) :=init E #else ill-formed #fi
          requires notBool isCPPRefType(DestT) andBool notBool isCPPArrayType(DestT) andBool notBool isCPPClassType(DestT) andBool notBool isCPPClassType(SrcT)

     rule #figureInit(... base: lv(loc(Base::SymBase, _), _, _), init: S:Stmt)
          => functionDef(Base, S)

     syntax MaybeExpr ::= Expr

     syntax MaybeExpr ::= NoExpr

     syntax KResult ::= NoExpr

     syntax NoExpr ::= "noExpr"

     syntax KItem ::= listInit(LVal, CPPType, InitType, List, ConstructorType)
                    | aggInit(LVal, CPPType, List)
                    | arrayInit(base: LVal, type: CPPType, current: Int, initList: List, result: MaybeExpr)
                    | strInit(LVal, CPPType, CharKind, String, Int, MaybeExpr)

     // 8.5.4:3.1 (aggregate init)
     rule listInit(Base::LVal, T::CPPType, _, L::List, _)
          => aggInit(Base, T, L)
          requires isAggregateType(T)

     // 8.5.4:3.2 (empty init list, default-constructible class)
     rule listInit(Base::LVal, T:CPPClassType, _, .List, CT::ConstructorType)
          => #valueInit(Base, T, CT)
          requires notBool isAggregateType(T)
               andBool hasConstructorThat(T, #klabel(`isDefaultConstructor`))

     // 8.5.4:3.5 (single element, non-aggregate, non-class, non-reference)
     // see comment below about narrowing conversions in classAggInit
     rule listInit(Base::LVal, T::CPPType, Type::InitType, ListItem(Init::Init), CT::ConstructorType)
          => #figureInit(Base, T, Type, Init, Init, Init, CT)
          requires notBool isAggregateType(T)
               andBool notBool isCPPClassType(T)
               andBool notBool isCPPRefType(T)

     // 8.5.4:3.7 (empty init list, non-aggregate, non-class, non-reference)
     rule listInit(Base::LVal, T::CPPType, _, .List, CT::ConstructorType)
          => #valueInit(Base, T, CT)
          requires notBool isAggregateType(T)
               andBool notBool isCPPClassType(T)
               andBool notBool isCPPRefType(T)

     rule aggInit(_, (t(Q::Quals, Mods::Set, incompleteArrayType(T::CPPType)) => t(Q, Mods, arrayType(T, size(L)))), L::List)

     rule aggInit(Base::LVal, t(Q::Quals, Mods::Set, arrayType(T::CPPType, N::Int)), L::List)
          => arrayInit(Base, t(Q, Mods, arrayType(T, N)), 0, L, noExpr)

     rule <k> aggInit(Base::LVal, t(_, _, classType(C::Class)), L::List)
               => classAndUnionAggInit(getTag(C), Base, NSDM, L, Inits, C)
          ...</k>
          <class-id> C </class-id>
          <non-static-data-members> NSDM::List </non-static-data-members>
          <initializers> Inits::Map </initializers>

     syntax Expr ::= classAndUnionAggInit(tag: Tag, base: LVal, fields: List, initList: List, initializers: Map, class: Class) [function]

     rule classAndUnionAggInit(Union(), Base::LVal, ListItem(X:KItem) _, ListItem(XInit::Init), InitMap::Map, C::Class)
       => classAggInit(Base, ListItem(X), ListItem(XInit), InitMap, C, noExpr)

     rule classAndUnionAggInit(... tag: Union(),
                                   fields: (ListItem(Class.DataMember(X:CId, _)) => .List) _::List,
                                   initList: .List,
                                   initializers: InitMap::Map)
         requires notBool hasInit(X, InitMap)

     rule classAndUnionAggInit(Union(), Base::LVal, ListItem(Class.DataMember(X::CId, T::CPPType)) _::List, .List, InitMap::Map, C::Class)
       => classAggInit(Base, ListItem(Class.DataMember(X, T)), .List, InitMap, C, noExpr)
       requires hasInit(X, InitMap)

     rule classAndUnionAggInit(T::Tag, Base::LVal, Fields::List, InitL::List, InitMap::Map, C::Class)
       => classAggInit(Base, Fields, InitL, InitMap, C, noExpr)
       requires T =/=K Union()

     syntax Bool ::= hasInit(CId, Map) [function]

     rule hasInit(X:CId, X |-> M::TypeMap _) => notBool isNoInit(M)

     syntax Bool ::= isNoInit(TypeMap) [function]

     rule isNoInit(_ |-> NoInit()) => true

     rule isNoInit(_ |-> _) => false [owise]

     syntax Expr ::= classAggInit(base: LVal, fields: List, initList: List, initializers: Map, class: Class, initExp: K)

     rule classAggInit(... base: Base::LVal,
                           fields: .List,
                           initList: .List,
                           initExp: E::MaybeExpr)
          => compoundInitJoin(E, Base)

     // technically this should reject programs where Init is a narrowing
     // conversion on T. However, in this case the initialization is
     // ill-formed. The only case in the semantics so far where we care whether
     // an initialization is well formed within a well-formed program is the
     // case where an initializer is part of a static cast. In this case we are
     // not performing list initialization and therefore cannot reach this rule.
     // as such, whether or not an initializer is a narrowing conversion should
     // only affect the behavior of programs by triggering an error at compile
     // time that the program is ill-formed. However, this error should be
     // emitted by the clang frontend when we parse the program, and therefore
     // semantics for narrowing conversions are not currently needed.
     // thus we elide them for now in order to avoid having to implement
     // semantics for constant expressions.
     rule (.K => figureInit(Base . no-template Name(C, F), T, Init, CopyInit()))
       ~> classAggInit(... base: Base::LVal,
                           fields: (ListItem(Class.DataMember(F:CId, _)) => .List) _,
                           initList: (ListItem(Init::Expr) => .List) _,
                           initializers: (F |-> (T::CPPType |-> _)) _,
                           class: C::Class)
          requires (notBool isAggregateType(T) orBool isBraceInit(Init))

     rule (.K => figureInit(Base . no-template Name(C, F), T, BraceInit(L), CopyInit()))
       ~> classAggInit(... base: Base::LVal,
                           fields: (ListItem(Class.DataMember(F:CId, _)) => .List) _,
                           initList: (ListItem(Init::Expr) _) #as L::List  => .List,
                           initializers: (F |-> (T::CPPType |-> _)) _,
                           class: C::Class)
          requires isAggregateType(T)
           andBool notBool isBraceInit(Init)

     rule (classAggInit(... fields: .List, initList: L::List, initExp: E2::MaybeExpr) => .K)
          ~> classAggInit(... initList: .List => L, initExp: E1::MaybeExpr => compoundInitJoin(E1, E2))

     syntax MaybeExpr ::= compoundInitJoin(MaybeExpr, MaybeExpr) [function]

     rule compoundInitJoin(E1::MaybeExpr, compoundInit(E2::Expr, V::Expr))
          => maybeCompoundInit(compoundInitJoin(E1, E2), V)

     rule compoundInitJoin(E1::MaybeExpr, noExpr) => E1

     rule compoundInitJoin(E1::MaybeExpr, E2::Expr) => maybeCompoundInit(E1, E2) [owise]

     syntax Expr ::= maybeCompoundInit(MaybeExpr, Expr) [function]

     rule maybeCompoundInit(noExpr, E2::Expr) => E2

     rule maybeCompoundInit(E1::Expr, E2::Expr) => compoundInit(E1, E2) [owise]

     rule (V:Val => .K) ~> classAggInit(... initExp: (E::MaybeExpr => compoundInitJoin(E, V)))

     rule (.K => figureInit(Base . no-template Name(C, F), T, #evalBraceOrEqualInitializer(C, Base, Init), CopyInit()))
       ~> classAggInit(... base: Base::LVal,
                           fields: (ListItem(Class.DataMember(F:CId, _)) => .List) _,
                           initList: .List,
                           initializers: (F |-> (T::CPPType |-> Init::Expr)) _,
                           class: C::Class)

     syntax Init ::= #evalBraceOrEqualInitializer(class: Class, object: Expr, initializer: Init) [function]

     rule #evalBraceOrEqualInitializer(_, _, NoInit()) => BraceInit(.List)

     rule #evalBraceOrEqualInitializer(_, _, ExprLoc(L::CabsLoc, I::Init) => I)

     rule #evalBraceOrEqualInitializer(C::Class, Base::Expr, BraceInit(L::List))
       => BraceInit(#evalBraceOrEqualInitializers(C, Base, L))

     rule #evalBraceOrEqualInitializer(C::Class, Base::Expr, Init::Expr) => evalBraceOrEqualInitializer(C, Base, Init) [owise]

     syntax List ::= #evalBraceOrEqualInitializers(class: Class, object: Expr, initializer: List) [function]

     rule #evalBraceOrEqualInitializers(_, _, .List) => .List

     rule #evalBraceOrEqualInitializers(C::Class, Base::Expr, ListItem(I::Init) L::List)
       => ListItem(#evalBraceOrEqualInitializer(C, Base, I)) #evalBraceOrEqualInitializers(C, Base, L)

     // *** < Aggregate initialization of an array >

     // Syntactic sugar
     syntax Expr ::= Expr "[" Int "]" [function]

     rule E::Expr [ I::Int ] => (E[prv(I, noTrace, t(noQuals, .Set, size_t))])


     rule (V:Val => .K) ~> arrayInit(... result:(E::MaybeExpr => compoundInitJoin(E, V)))

     // No initializers left, but we still need to initialize
     // the rest of the array.
     rule (.K => figureInit(Base[I], T, BraceInit(.List), CopyInit())) ~>
          arrayInit(...
               base:     Base::LVal,
               type:     t(... st: arrayType(T::CPPType, Size::Int)),
               current:  (I::Int => I +Int 1),
               initList: .List
          )
          requires Size >Int I

     // No initializers left, the whole array is done.
     rule arrayInit(...
               base:     Base::LVal,
               type:     t(... st: arrayType(_, Size::Int)),
               current:  I::Int,
               initList: .List,
               result:   E::MaybeExpr
          ) => compoundInitJoin(E, Base)
          requires I ==Int Size

     rule (.K => braceElisionNo()) ~>
          arrayInit(...
               type:     t(... st: arrayType(T::CPPType, Size::Int)),
               current:  I::Int,
               initList: ListItem(Init::Init) _
          )
          requires (notBool isAggregateType(T) orBool isBraceInit(Init))
           andBool Size >Int I

     rule (.K => braceElisionMaybe(Init, T)) ~>
          arrayInit(...
               type:     t(... st: arrayType(T::CPPType, Size::Int)),
               current:  I::Int,
               initList: (ListItem(Init::Init) _) #as L::List
          )
          requires notBool isBraceInit(Init)
           andBool isAggregateType(T)
           andBool Size >Int I

     syntax KItem ::= braceElisionYes()
                    | braceElisionNo()
                    | braceElisionMaybe(Init, CPPType)
                    | braceElisionMaybe2(init: Expr, initType: TypeExpr, initCat: CatExpr, destType: CPPType)

     // If the initializer is neither BraceInit nor Expr, then this rule may not apply.
     rule braceElisionMaybe(E:Expr, T::CPPType) => braceElisionMaybe2(E, E, E, T)

     context braceElisionMaybe2(... initType: (HOLE:TypeExpr => typeof(HOLE))) [result(CPPDType)]

     context braceElisionMaybe2(... initCat: (HOLE:CatExpr => catof(HOLE))) [result(ValueCategory)]

     rule braceElisionMaybe2(...
               init:     From::Expr,
               initType: FromT:CPPType,
               initCat:  FromC:ValueCategory,
               destType: ToT::CPPType
          ) =>
          #if canBeImplicitlyConvertedTo(FromT, FromC, ToT)
          #then braceElisionNo()
          #else braceElisionYes()
          #fi

     // Ordinary initialization of an array member.
     // No brace elision happens.
     rule (braceElisionNo() => figureInit(Base[I], T, Init, CopyInit())) ~>
          arrayInit(...
               base:     Base::LVal,
               type:     t(... st: arrayType(T::CPPType, Size::Int)),
               current:  (I::Int => I +Int 1),
               initList: (ListItem(Init::Init) => .List) _
          )

     // Assuming brace elision.
     // The provided initializer is not a brace-init-list,
     // and so we make a braced-init-list from
     // all the remaining initializer-list.
     // The initializers not used for member initialization
     // will be later used to initialize the rest of current array.
     rule (braceElisionYes() => figureInit(Base[I], T, BraceInit(L), CopyInit())) ~>
          arrayInit(...
               base:     Base::LVal,
               type:     t(... st: arrayType(T::CPPType, Size::Int)),
               current:  (I::Int => I +Int 1),
               initList: (ListItem(Init::Init) _) #as L::List => .List
          )

     // Use the initializers that remained after brace-elision
     // to initialize the rest of the outer aggregate.
     // Brace elision probably happened in past, because
     // the initList of the second `arrayInit` is empty.
     //
     // It may also hapen that after brace elision, the topmost `arrayInit`
     // (`classAggInit`) rewrites to `compoundInit`, so this rule will not apply.
     // That should not be a problem, because it happens
     // only when the initializer list has been fully used.
     rule (
            arrayInit(...
               type:     t(... st: arrayType(_, Size::Int)),
               current:  Current::Int,
               initList: L::List,
               result:   E2::MaybeExpr
            ) => .K
          ) ~>
          arrayInit(...
               initList: .List => L,
               result:   (E1::MaybeExpr => compoundInitJoin(E1, E2))
          )
          requires (Current ==Int Size) andBool (L =/=K .List)

     // This is similar: we elided an opening brace and the member initialization is now done,
     // but now the member was an aggregate class.
     rule (classAggInit(... fields: .List, initList: L::List, initExp: E2::MaybeExpr) => .K) ~>
          arrayInit(...
               initList: .List => L,
               result:   (E1::MaybeExpr => compoundInitJoin(E1, E2))
          )

     // *** </ Aggregate initialization of an array >


     rule <k> (.K => resolveOverload(cSet(#if Type ==K DirectInit() #then M #else stripExplicit(M) #fi, C :: ConstructorId(X)), list(L), constructor))
              ~> constructorInit(Base::LVal, Type::InitType, _ :: Class(_, X::CId, _) #as C::Class, L::List, _)
          ...</k>
          <curr-tr-tu> Tu::String </curr-tr-tu>
          <tu-id> Tu </tu-id>
          <class-id> C </class-id>
          <cenv>... ConstructorId(X) |-> M::TypeMap ...</cenv>

     rule stripExplicit(T::CPPFunctionType |-> K1:KItem M::TypeMap) => T |-> K1 stripExplicit(M)
          requires notBool isMethodExplicit(T)

     rule stripExplicit(_ |-> _ M::TypeMap) => stripExplicit(M) [owise]

     rule stripExplicit(.Map) => .Map

     rule V:Val ~> constructorInit(Base::LVal, _, _, _, NoConstructorInit)
          => compoundInit(compoundInit(le(beginConstruction(Base, false), trace(Base), type(Base)), V), le(endConstruction(Base, false), trace(Base), type(Base)))

     rule V:Val ~> constructorInit(Base::LVal, _, _, _, ConstructorInit(IsBaseClass::Bool))
          => compoundInit(compoundInit(le(beginConstruction(Base, IsBaseClass), trace(Base), type(Base)), V), le(endConstruction(Base, true), trace(Base), type(Base)))

     rule (.K => figureInit(Base[I], innerType(T), CharacterLiteral(C, ordChar(firstChar(S))), CopyInit())) ~> strInit(Base:LVal, T::CPPArrayType, C::CharKind, (S::String => butFirstChar(S)), (I::Int => I +Int 1), _)
          requires S =/=String ""

     rule (.K => figureInit(Base[I], T, CharacterLiteral(C, 0), CopyInit())) ~> strInit(Base:LVal, t(_, _, arrayType(T::CPPType, N::Int)), C::CharKind, "", (I::Int => I +Int 1), _)
          requires I <Int N

     rule (V:Val => .K)
          ~> strInit(_, _, _, _, _, (E::MaybeExpr => compoundInitJoin(E, V)))

     rule strInit(Base:LVal, t(Q::Quals, Mods::Set, arrayType(T::CPPType, N::Int)), _, "", N, E::MaybeExpr)
          => compoundInitJoin(E, Base)

     rule compoundInit(V:TExpr, LV:LVal) => le(compoundInit(stripCompoundInit(V), LV), noTrace, type(LV))

     rule compoundInit(V:TExpr, XV:XVal) => xe(compoundInit(stripCompoundInit(V), XV), noTrace, type(XV))

     rule compoundInit(V:TExpr, PRV:PRVal) => pre(compoundInit(stripCompoundInit(V), PRV), noTrace, type(PRV))

     rule compoundInit(V:Val, E::Expr) => E
          requires isEvalVal(V)

     syntax Expr ::= stripCompoundInit(Val) [function]

     rule stripCompoundInit(le(compoundInit(E1::Expr, E2::Expr), _, _)) => compoundInit(E1, E2)

     rule stripCompoundInit(V::Val) => V [owise]

endmodule