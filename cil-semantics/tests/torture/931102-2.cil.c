/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "931102-2.c"
struct __anonstruct_b_4 {
   short h ;
   short l ;
};
#line 2 "931102-2.c"
union __anonunion_T_3 {
   long align ;
   struct __anonstruct_b_4 b ;
};
#line 2 "931102-2.c"
typedef union __anonunion_T_3 T;
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 11 "931102-2.c"
int f(int x ) 
{ int num ;
  T reg ;

  {
#line 14
  num = 0;
#line 17
  reg.b.l = (short )x;
#line 18
  while (((int )reg.b.l & 1) == 0) {
#line 20
    num ++;
#line 21
    reg.b.l = (short )((int )reg.b.l >> 1);
  }
#line 23
  return (num);
}
}
#line 26 "931102-2.c"
int main(void) 
{ int tmp ;

  {
#line 28
  tmp = f(2);
#line 28
  if (tmp != 1) {
#line 29
    abort();
  }
#line 30
  exit(0);
}
}
