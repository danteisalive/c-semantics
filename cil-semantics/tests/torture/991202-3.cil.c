/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 3 "991202-3.c"
unsigned int f(unsigned int a ) 
{ 

  {
#line 5
  return ((a * 65536U) / 8U);
}
}
#line 8 "991202-3.c"
unsigned int g(unsigned int a ) 
{ 

  {
#line 10
  return (a * 65536U);
}
}
#line 13 "991202-3.c"
unsigned int h(unsigned int a ) 
{ 

  {
#line 15
  return (a / 8U);
}
}
#line 18 "991202-3.c"
int main(void) 
{ unsigned int tmp ;
  unsigned int tmp___0 ;
  unsigned int tmp___1 ;

  {
#line 20
  tmp = f(65536U);
#line 20
  tmp___0 = g(65536U);
#line 20
  tmp___1 = h(tmp___0);
#line 20
  if (tmp != tmp___1) {
#line 21
    abort();
  }
#line 22
  exit(0);
}
}
