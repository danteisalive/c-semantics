/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 4 "pr34070-1.c"
int f(unsigned int x ) 
{ 

  {
#line 6
  return ((int )x % 4);
}
}
#line 9 "pr34070-1.c"
int main(void) 
{ int tmp ;

  {
#line 11
  tmp = f(4294967295U);
#line 11
  if (tmp != -1) {
#line 12
    abort();
  }
#line 13
  return (0);
}
}
