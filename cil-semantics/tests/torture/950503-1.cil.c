/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "950503-1.c"
int main(void) 
{ int tmp ;
  unsigned long long utmp1 ;
  unsigned long long utmp2 ;

  {
#line 7
  tmp = 16;
#line 9
  utmp1 = 0xffffffffffffffffULL >> tmp;
#line 10
  utmp2 = 0xffffffffffffffffULL >> 16;
#line 12
  if (utmp1 != utmp2) {
#line 13
    abort();
  }
#line 14
  exit(0);
}
}
