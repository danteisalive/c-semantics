/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "pr28403.c"
typedef unsigned long long ull;
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 3 "pr28403.c"
int global  ;
#line 5 "pr28403.c"
int ( __attribute__((__noinline__)) foo)(int x1 , int x2 , int x3 , int x4 , int x5 ,
                                         int x6 , int x7 , int x8 ) 
{ 

  {
#line 8
  global = ((((((x1 + x2) + x3) + x4) + x5) + x6) + x7) + x8;
#line 9
  return (0);
}
}
#line 12 "pr28403.c"
ull ( __attribute__((__noinline__)) bar)(ull x ) 
{ 

  {
#line 15
  foo(1, 2, 1, 3, 1, 4, 1, 5);
#line 16
  return (x >> global);
}
}
#line 19 "pr28403.c"
int main(void) 
{ ull tmp ;

  {
#line 21
  tmp = bar(81985529216486895ULL);
#line 21
  if (tmp != 81985529216486895ULL >> 18) {
#line 22
    abort();
  }
#line 23
  exit(0);
}
}
