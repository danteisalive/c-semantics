/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "20030828-1.c"
int const   *p  ;
#line 4 "20030828-1.c"
int bar(void) 
{ 

  {
#line 6
  return ((int )(*p + 1));
}
}
#line 9 "20030828-1.c"
int main(void) 
{ int i ;
  int tmp ;

  {
#line 14
  i = 5;
#line 15
  p = (int const   *)(& i);
#line 16
  tmp = bar();
#line 16
  if (tmp != 6) {
#line 17
    abort();
  }
#line 18
  exit(0);
}
}
