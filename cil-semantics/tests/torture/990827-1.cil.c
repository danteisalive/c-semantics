/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "990827-1.c"
unsigned int test(unsigned int one , unsigned int bit ) 
{ unsigned int val ;
  unsigned int zero ;

  {
#line 4
  val = bit & 1U;
#line 5
  zero = one >> 1;
#line 7
  val ++;
#line 8
  return (zero + (val >> 1));
}
}
#line 11 "990827-1.c"
int main(void) 
{ unsigned int tmp ;
  unsigned int tmp___0 ;
  unsigned int tmp___1 ;

  {
#line 13
  tmp = test(1U, 0U);
#line 13
  if (tmp != 0U) {
#line 14
    abort();
  }
#line 15
  tmp___0 = test(1U, 1U);
#line 15
  if (tmp___0 != 1U) {
#line 16
    abort();
  }
#line 17
  tmp___1 = test(1U, 65535U);
#line 17
  if (tmp___1 != 1U) {
#line 18
    abort();
  }
#line 19
  exit(0);
#line 21
  return (0);
}
}
