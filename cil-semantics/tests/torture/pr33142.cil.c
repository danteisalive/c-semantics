/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 2 "pr33142.c"
extern int abs(int j ) ;
#line 5 "pr33142.c"
int ( __attribute__((__noinline__)) lisp_atan2)(long dy , long dx ) 
{ int tmp ;
  int tmp___0 ;

  {
#line 6
  if (dx <= 0L) {
#line 7
    if (dy > 0L) {
#line 8
      tmp = abs((int )dx);
#line 8
      tmp___0 = abs((int )dy);
#line 8
      return (tmp <= tmp___0);
    }
  }
#line 9
  return (0);
}
}
#line 12 "pr33142.c"
int main(void) 
{ long volatile   dy ;
  long volatile   dx ;
  int tmp ;

  {
#line 13
  dy = (long volatile   )63;
#line 13
  dx = (long volatile   )-77;
#line 14
  tmp = lisp_atan2((long )dy, (long )dx);
#line 14
  if (tmp) {
#line 15
    abort();
  }
#line 16
  return (0);
}
}
