/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 4 "loop-10.c"
static int count  =    0;
#line 6 "loop-10.c"
static void inc(void) 
{ 

  {
#line 9
  count ++;
#line 10
  return;
}
}
#line 12 "loop-10.c"
int main(void) 
{ int iNbr ;
  int test ;

  {
#line 14
  iNbr = 1;
#line 15
  test = 0;
#line 16
  while (test == 0) {
#line 18
    inc();
#line 19
    if (iNbr == 0) {
#line 20
      break;
    } else {
#line 23
      inc();
#line 24
      iNbr --;
    }
#line 26
    test = 1;
  }
#line 28
  if (count != 2) {
#line 29
    abort();
  }
#line 30
  return (0);
}
}
