/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "931012-1.c"
int f(int b , int c ) 
{ 

  {
#line 4
  if (b != 0) {
#line 4
    if (b != 1) {
#line 4
      if (c != 0) {
#line 5
        b = 0;
      }
    }
  }
#line 6
  return (b);
}
}
#line 9 "931012-1.c"
int main(void) 
{ int tmp ;

  {
#line 11
  tmp = f(1, 2);
#line 11
  if (! tmp) {
#line 12
    abort();
  }
#line 13
  exit(0);
}
}
