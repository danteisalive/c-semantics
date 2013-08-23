/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "arith-1.c"
unsigned int sat_add(unsigned int i ) 
{ unsigned int ret ;

  {
#line 5
  ret = i + 1U;
#line 6
  if (ret < i) {
#line 7
    ret = i;
  }
#line 8
  return (ret);
}
}
#line 11 "arith-1.c"
int main(void) 
{ unsigned int tmp ;

  {
#line 13
  tmp = sat_add(~ 0U);
#line 13
  if (tmp != 4294967295U) {
#line 14
    abort();
  }
#line 15
  exit(0);
}
}
