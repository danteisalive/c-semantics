/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 6 "pr38422.c"
struct S {
   int s : 30 ;
};
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 6 "pr38422.c"
struct S s  ;
#line 11 "pr38422.c"
void foo(void) 
{ 

  {
#line 14
  s.s *= 2;
#line 15
  return;
}
}
#line 17 "pr38422.c"
int main(void) 
{ 

  {
#line 19
  s.s = 24;
#line 20
  foo();
#line 21
  if (s.s != 48) {
#line 22
    abort();
  }
#line 23
  return (0);
}
}
