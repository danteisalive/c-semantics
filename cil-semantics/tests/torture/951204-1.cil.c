/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "951204-1.c"
void f(char *x ) 
{ 

  {
#line 4
  *x = (char )'x';
#line 5
  return;
}
}
#line 7 "951204-1.c"
int main(void) 
{ int i ;
  char x ;

  {
#line 10
  x = (char )'\000';
#line 12
  i = 0;
#line 12
  while (i < 100) {
#line 14
    f(& x);
#line 15
    if ((int const   )*((char const   *)(& x)) != 120) {
#line 16
      abort();
    }
#line 12
    i ++;
  }
#line 18
  exit(0);
}
}
