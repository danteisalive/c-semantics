/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 4 "981001-1.c"
unsigned long flg  =    0UL;
#line 6 "981001-1.c"
long sub(int n ) 
{ int a ;
  int b ;
  long tmp ;
  long tmp___0 ;
  long tmp___1 ;
  long tmp___2 ;

  {
#line 10
  if (n >= 2) {
#line 12
    if (n % 2 == 0) {
#line 14
      tmp = sub(n / 2);
#line 14
      a = (int )tmp;
#line 16
      tmp___0 = sub(n / 2 - 1);
#line 16
      return (((long )a + 2L * tmp___0) * (long )a);
    } else {
#line 20
      tmp___1 = sub(n / 2 + 1);
#line 20
      a = (int )tmp___1;
#line 21
      tmp___2 = sub(n / 2);
#line 21
      b = (int )tmp___2;
#line 23
      return ((long )(a * a + b * b));
    }
  } else {
#line 27
    return ((long )n);
  }
}
}
#line 30 "981001-1.c"
int main(void) 
{ long tmp ;

  {
#line 32
  tmp = sub(30);
#line 32
  if (tmp != 832040L) {
#line 33
    flg |= 256UL;
  }
#line 35
  if (flg) {
#line 36
    abort();
  }
#line 38
  exit(0);
}
}
