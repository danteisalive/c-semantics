/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "pr27073.c"
void ( __attribute__((__noinline__)) foo)(int *p , int d1 , int d2 , int d3 , short count ,
                                          int s1 , int s2 , int s3 , int s4 , int s5 ) 
{ int n ;
  int *tmp ;
  int *tmp___0 ;
  int *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int tmp___4 ;

  {
#line 6
  n = (int )count;
#line 7
  while (1) {
#line 7
    tmp___4 = n;
#line 7
    n --;
#line 7
    if (! tmp___4) {
#line 7
      break;
    }
#line 9
    tmp = p;
#line 9
    p ++;
#line 9
    *tmp = s1;
#line 10
    tmp___0 = p;
#line 10
    p ++;
#line 10
    *tmp___0 = s2;
#line 11
    tmp___1 = p;
#line 11
    p ++;
#line 11
    *tmp___1 = s3;
#line 12
    tmp___2 = p;
#line 12
    p ++;
#line 12
    *tmp___2 = s4;
#line 13
    tmp___3 = p;
#line 13
    p ++;
#line 13
    *tmp___3 = s5;
  }
#line 15
  return;
}
}
#line 17 "pr27073.c"
int main(void) 
{ int x[10] ;
  int i ;

  {
#line 21
  foo(x, 0, 0, 0, (short)2, 100, 200, 300, 400, 500);
#line 22
  i = 0;
#line 22
  while (i < 10) {
#line 23
    if (x[i] != (i % 5 + 1) * 100) {
#line 24
      abort();
    }
#line 22
    i ++;
  }
#line 25
  exit(0);
}
}
