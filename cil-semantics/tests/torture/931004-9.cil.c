/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "931004-9.c"
struct tiny {
   char c ;
   char d ;
};
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 8 "931004-9.c"
void f(int n , struct tiny x , struct tiny y , struct tiny z , long l ) 
{ 

  {
#line 10
  if ((int )x.c != 10) {
#line 11
    abort();
  }
#line 12
  if ((int )x.d != 20) {
#line 13
    abort();
  }
#line 15
  if ((int )y.c != 11) {
#line 16
    abort();
  }
#line 17
  if ((int )y.d != 21) {
#line 18
    abort();
  }
#line 20
  if ((int )z.c != 12) {
#line 21
    abort();
  }
#line 22
  if ((int )z.d != 22) {
#line 23
    abort();
  }
#line 25
  if (l != 123L) {
#line 26
    abort();
  }
#line 27
  return;
}
}
#line 29 "931004-9.c"
int main(void) 
{ struct tiny x[3] ;

  {
#line 32
  x[0].c = (char)10;
#line 33
  x[1].c = (char)11;
#line 34
  x[2].c = (char)12;
#line 35
  x[0].d = (char)20;
#line 36
  x[1].d = (char)21;
#line 37
  x[2].d = (char)22;
#line 38
  f(3, x[0], x[1], x[2], 123L);
#line 39
  exit(0);
}
}
