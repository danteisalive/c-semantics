/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "951115-1.c"
int var  =    0;
#line 4 "951115-1.c"
void g(void) 
{ 

  {
#line 6
  var = 1;
#line 7
  return;
}
}
#line 9 "951115-1.c"
void f(void) 
{ int f2 ;

  {
#line 11
  f2 = 0;
#line 13
  if (f2 == 0) {

  }
#line 16
  g();
#line 17
  return;
}
}
#line 19 "951115-1.c"
int main(void) 
{ 

  {
#line 21
  f();
#line 22
  if (var != 1) {
#line 23
    abort();
  }
#line 24
  exit(0);
}
}
