/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "921207-1.c"
int f(void) 
{ unsigned int b ;

  {
#line 4
  b = 0U;
#line 6
  if (b > 4294967295U) {
#line 7
    b = ~ 0U;
  }
#line 9
  return ((int )b);
}
}
#line 11 "921207-1.c"
int main(void) 
{ int tmp ;

  {
#line 13
  tmp = f();
#line 13
  if (tmp != 0) {
#line 14
    abort();
  }
#line 15
  exit(0);
}
}
