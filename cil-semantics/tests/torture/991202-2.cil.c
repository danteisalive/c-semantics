/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 3 "991202-2.c"
int f1(void) 
{ unsigned long x ;
  unsigned long y ;

  {
#line 6
  y = 1UL;
#line 8
  x = (y * 8192UL - 216UL) % 16UL;
#line 9
  return ((int )x);
}
}
#line 12 "991202-2.c"
int main(void) 
{ int tmp ;

  {
#line 14
  tmp = f1();
#line 14
  if (tmp != 8) {
#line 15
    abort();
  }
#line 16
  exit(0);
}
}
