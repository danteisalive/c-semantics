/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "980604-1.c"
int a  =    1;
#line 3 "980604-1.c"
int b  =    -1;
#line 5 "980604-1.c"
int c  =    1;
#line 6 "980604-1.c"
int d  =    0;
#line 8 "980604-1.c"
int main(void) 
{ double e ;
  double f ;
  double g ;

  {
#line 14
  f = (double )c;
#line 15
  g = (double )d;
#line 16
  if (a < b) {
#line 16
    e = f;
  } else {
#line 16
    e = g;
  }
#line 17
  if (e) {
#line 18
    abort();
  }
#line 19
  exit(0);
}
}
