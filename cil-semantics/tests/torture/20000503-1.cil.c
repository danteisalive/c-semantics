/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "20000503-1.c"
unsigned long sub(int a ) 
{ int tmp ;

  {
#line 5
  if (0 > a - 2) {
#line 5
    tmp = 0;
  } else {
#line 5
    tmp = a - 2;
  }
#line 5
  return ((unsigned long )tmp * sizeof(long ));
}
}
#line 8 "20000503-1.c"
int main(void) 
{ unsigned long tmp ;

  {
#line 10
  tmp = sub(0);
#line 10
  if (tmp != 0UL) {
#line 11
    abort();
  }
#line 13
  exit(0);
}
}
