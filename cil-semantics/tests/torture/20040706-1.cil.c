/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "20040706-1.c"
int main(void) 
{ int i ;

  {
#line 5
  i = 0;
#line 5
  while (i < 10) {
    goto __Cont;
    __Cont: /* CIL Label */ 
#line 5
    i ++;
  }
#line 7
  if (i < 10) {
#line 8
    abort();
  }
#line 9
  exit(0);
}
}
