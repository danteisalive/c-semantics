/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "loop-6.c"
int main(void) 
{ char c ;
  char d ;
  int nbits ;

  {
#line 7
  c = (char)-1;
#line 8
  nbits = 1;
#line 8
  while (nbits < 100) {
#line 9
    d = (char )((1 << nbits) - 1);
#line 10
    if ((int )d == (int )c) {
#line 11
      break;
    }
#line 8
    nbits ++;
  }
#line 13
  if (nbits == 100) {
#line 14
    abort();
  }
#line 15
  exit(0);
}
}
