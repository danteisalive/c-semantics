/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 6 "../../lib/includes/stddef.h"
typedef unsigned int size_t___0;
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 6 "pr27260.c"
extern void *memset(void * , int  , size_t___0  ) ;
#line 8 "pr27260.c"
char buf[65]  ;
#line 10 "pr27260.c"
void foo(int x ) 
{ int tmp ;

  {
#line 13
  if (x != 2) {
#line 13
    tmp = 1;
  } else {
#line 13
    tmp = 0;
  }
#line 13
  memset((void *)(buf), tmp, 64U);
#line 14
  return;
}
}
#line 16 "pr27260.c"
int main(void) 
{ int i ;

  {
#line 19
  buf[64] = (char)2;
#line 20
  i = 0;
#line 20
  while (i < 64) {
#line 21
    if ((int )buf[i] != 0) {
#line 22
      abort();
    }
#line 20
    i ++;
  }
#line 23
  foo(0);
#line 24
  i = 0;
#line 24
  while (i < 64) {
#line 25
    if ((int )buf[i] != 1) {
#line 26
      abort();
    }
#line 24
    i ++;
  }
#line 27
  foo(2);
#line 28
  i = 0;
#line 28
  while (i < 64) {
#line 29
    if ((int )buf[i] != 0) {
#line 30
      abort();
    }
#line 28
    i ++;
  }
#line 31
  if ((int )buf[64] != 2) {
#line 32
    abort();
  }
#line 33
  return (0);
}
}
