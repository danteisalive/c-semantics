/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "921218-2.c"
int f(void) 
{ long l2 ;
  unsigned short us ;
  unsigned long ul ;
  short s2 ;

  {
#line 9
  s2 = (short)-1;
#line 9
  l2 = (long )s2;
#line 9
  us = (unsigned short )l2;
#line 9
  ul = (unsigned long )us;
#line 10
  return ((int )ul);
}
}
#line 13 "921218-2.c"
int main(void) 
{ int tmp ;

  {
#line 15
  tmp = f();
#line 15
  if (tmp != 65535) {
#line 16
    abort();
  }
#line 17
  exit(0);
}
}
