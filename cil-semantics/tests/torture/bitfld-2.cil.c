/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 6 "bitfld-2.c"
struct A {
   unsigned short a : 5 ;
   unsigned short b : 5 ;
   unsigned short c : 6 ;
};
#line 12 "bitfld-2.c"
struct B {
   unsigned short a : 5 ;
   unsigned short b : 3 ;
   unsigned short c : 8 ;
};
#line 3
extern void abort(void) ;
#line 4
extern void exit(int  ) ;
#line 18 "bitfld-2.c"
int main(void) 
{ 

  {
#line 24
  if (sizeof(struct A ) != sizeof(struct B )) {
#line 25
    abort();
  }
#line 27
  exit(0);
}
}
