/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "950322-1.c"
int f(unsigned char *a ) 
{ int i ;
  int j ;
  int x ;
  int y ;

  {
#line 7
  j = (int )*(a + 1);
#line 8
  i = (int )*(a + 0) - j;
#line 9
  if (i < 0) {
#line 11
    x = 1;
#line 12
    y = - i;
  } else {
#line 16
    x = 0;
#line 17
    y = i;
  }
#line 19
  return (x + y);
}
}
#line 23 "950322-1.c"
int main(void) 
{ unsigned char a[2] ;
  int tmp ;

  {
#line 26
  a[0] = (unsigned char)8;
#line 27
  a[1] = (unsigned char)9;
#line 28
  tmp = f(a);
#line 28
  if (tmp != 2) {
#line 29
    abort();
  }
#line 30
  exit(0);
}
}
