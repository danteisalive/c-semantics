/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 6 "20021119-1.c"
int foo(int i ) 
{ int r ;

  {
#line 9
  r = (80 - 4 * i) / 20;
#line 10
  return (r);
}
}
#line 13 "20021119-1.c"
int main(void) 
{ int tmp ;

  {
#line 15
  tmp = foo(1);
#line 15
  if (tmp != 3) {
#line 16
    abort();
  }
#line 17
  return (0);
}
}
