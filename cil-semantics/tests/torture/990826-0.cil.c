/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 15 "../../lib/includes/math.h"
extern double floor(double x ) ;
#line 13 "990826-0.c"
int main(void) 
{ double tmp ;

  {
#line 15
  tmp = floor(0.1);
#line 15
  if (tmp != 0.) {
#line 16
    abort();
  }
#line 17
  return (0);
}
}
