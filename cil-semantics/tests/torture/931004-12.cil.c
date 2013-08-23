/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 9 "../../lib/includes/stdlib.h"
typedef unsigned int size_t;
#line 6 "../../lib/includes/stdarg.h"
typedef void *va_list;
#line 4 "931004-12.c"
struct tiny {
   char c ;
   char d ;
   char e ;
};
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 27 "../../lib/includes/stdarg.h"
extern va_list __va_inc(va_list *ap , size_t size ) ;
#line 32
extern void __va_start(va_list *ap , void *pN ) ;
#line 37
extern void __va_end(va_list *ap ) ;
#line 11 "931004-12.c"
void f(int n  , ...) 
{ struct tiny x ;
  int i ;
  va_list ap ;
  va_list tmp ;
  long x___0 ;
  va_list tmp___0 ;

  {
#line 17
  __va_start(& ap, (void *)(& n));
#line 18
  i = 0;
#line 18
  while (i < n) {
#line 20
    tmp = __va_inc(& ap, (unsigned int )sizeof(struct tiny ));
#line 20
    x = *((struct tiny *)tmp);
#line 21
    if ((int )x.c != i + 10) {
#line 22
      abort();
    }
#line 23
    if ((int )x.d != i + 20) {
#line 24
      abort();
    }
#line 25
    if ((int )x.e != i + 30) {
#line 26
      abort();
    }
#line 18
    i ++;
  }
#line 29
  tmp___0 = __va_inc(& ap, (unsigned int )sizeof(long ));
#line 29
  x___0 = *((long *)tmp___0);
#line 30
  if (x___0 != 123L) {
#line 31
    abort();
  }
#line 33
  __va_end(& ap);
#line 34
  return;
}
}
#line 36 "931004-12.c"
int main(void) 
{ struct tiny x[3] ;

  {
#line 39
  x[0].c = (char)10;
#line 40
  x[1].c = (char)11;
#line 41
  x[2].c = (char)12;
#line 42
  x[0].d = (char)20;
#line 43
  x[1].d = (char)21;
#line 44
  x[2].d = (char)22;
#line 45
  x[0].e = (char)30;
#line 46
  x[1].e = (char)31;
#line 47
  x[2].e = (char)32;
#line 48
  f(3, x[0], x[1], x[2], 123L);
#line 49
  exit(0);
}
}
