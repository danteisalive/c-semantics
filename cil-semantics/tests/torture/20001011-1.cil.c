/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 3 "20001011-1.c"
extern int strcmp(char const   * , char const   * ) ;
#line 5 "20001011-1.c"
int foo(char const   *a ) 
{ int tmp ;

  {
#line 7
  tmp = strcmp(a, "main");
#line 7
  return (tmp);
}
}
#line 10 "20001011-1.c"
int main(void) 
{ int tmp ;

  {
#line 12
  tmp = foo("main");
#line 12
  if (tmp) {
#line 13
    abort();
  }
#line 14
  return (0);
}
}
