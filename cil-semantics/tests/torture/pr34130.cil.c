/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 9 "../../lib/includes/math.h"
extern int abs(int num ) ;
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 4 "pr34130.c"
int foo(int i ) 
{ int tmp ;

  {
#line 6
  tmp = abs(i - 2);
#line 6
  return (-2 * tmp);
}
}
#line 8 "pr34130.c"
int main(void) 
{ int tmp ;
  int tmp___0 ;

  {
#line 10
  tmp = foo(1);
#line 10
  if (tmp != -2) {
#line 12
    abort();
  } else {
#line 10
    tmp___0 = foo(3);
#line 10
    if (tmp___0 != -2) {
#line 12
      abort();
    }
  }
#line 13
  return (0);
}
}
