/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "920721-1.c"
long f(short a , short b ) 
{ 

  {
#line 2
  return ((long )a / (long )b);
}
}
#line 3 "920721-1.c"
int main(void) 
{ long tmp ;

  {
#line 3
  tmp = f((short)-32768, (short)-1);
#line 3
  if (tmp != 32768L) {
#line 3
    abort();
  } else {
#line 3
    exit(0);
  }
#line 3
  return (0);
}
}
