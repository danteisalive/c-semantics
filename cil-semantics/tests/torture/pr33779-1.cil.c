/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 2 "pr33779-1.c"
int foo(int i ) 
{ 

  {
#line 4
  if ((unsigned int )(i + 1) * 4U == 0U) {
#line 5
    return (1);
  }
#line 6
  return (0);
}
}
#line 10 "pr33779-1.c"
int main(void) 
{ int tmp ;

  {
#line 12
  tmp = foo(1073741823);
#line 12
  if (tmp == 0) {
#line 13
    abort();
  }
#line 14
  return (0);
}
}
