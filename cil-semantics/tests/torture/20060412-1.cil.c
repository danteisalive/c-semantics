/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 4 "20060412-1.c"
struct S {
   long o ;
};
#line 9 "20060412-1.c"
struct T {
   long o ;
   struct S m[82] ;
};
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 15 "20060412-1.c"
struct T t  ;
#line 17 "20060412-1.c"
int main(void) 
{ struct S *p ;
  struct S *q ;

  {
#line 21
  p = (struct S *)(& t);
#line 22
  p = & ((struct T *)p)->m[0];
#line 23
  q = p + 82;
#line 24
  while (1) {
#line 24
    q --;
#line 24
    if (! ((unsigned long )q > (unsigned long )p)) {
#line 24
      break;
    }
#line 25
    q->o = -1L;
  }
#line 26
  q->o = 0L;
#line 28
  if ((unsigned long )q > (unsigned long )p) {
#line 29
    abort();
  }
#line 30
  if (q - p > 0) {
#line 31
    abort();
  }
#line 32
  return (0);
}
}
