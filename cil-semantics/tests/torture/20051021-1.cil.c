/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 6 "20051021-1.c"
int count  =    0;
#line 8 "20051021-1.c"
int foo1(void) 
{ 

  {
#line 10
  count ++;
#line 11
  return (0);
}
}
#line 14 "20051021-1.c"
int foo2(void) 
{ 

  {
#line 16
  count ++;
#line 17
  return (0);
}
}
#line 20 "20051021-1.c"
int main(void) 
{ int tmp ;
  int tmp___0 ;

  {
#line 22
  tmp = foo1();
#line 22
  tmp___0 = foo2();
#line 22
  if ((tmp == 1) & (tmp___0 == 1)) {
#line 23
    abort();
  }
#line 25
  if (count != 2) {
#line 26
    abort();
  }
#line 28
  return (0);
}
}
