/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 6 "20030903-1.c"
enum X {
    X1 = 1,
    X2 = 2,
    X3 = 3,
    X4 = 4
} ;
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 7 "20030903-1.c"
static enum X  volatile  test  =    (enum X  volatile  )0;
#line 8
static void y(int x ) ;
#line 10 "20030903-1.c"
int main(void) 
{ 

  {
#line 12
  switch ((int )test) {
  case 1: 
#line 14
  y(1);
#line 14
  break;
  case 2: 
#line 15
  y(2);
#line 15
  break;
  case 3: 
#line 16
  y(3);
#line 16
  break;
  case 4: 
#line 17
  y(4);
#line 17
  break;
  }
#line 19
  return (0);
}
}
#line 22 "20030903-1.c"
static void y(int x ) 
{ 

  {
#line 22
  abort();
#line 22
  return;
}
}
