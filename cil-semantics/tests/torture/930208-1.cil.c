/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "930208-1.c"
struct __anonstruct_c_4 {
   char b3 ;
   char b2 ;
   char b1 ;
   char b0 ;
};
#line 2 "930208-1.c"
union __anonunion_T_3 {
   long l ;
   struct __anonstruct_c_4 c ;
};
#line 2 "930208-1.c"
typedef union __anonunion_T_3 T;
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 7 "930208-1.c"
int f(T u ) 
{ int tmp ;

  {
#line 9
  u.c.b0 = (char )((int )u.c.b0 + 1);
#line 10
  u.c.b3 = (char )((int )u.c.b3 + 1);
#line 11
  if ((int )u.c.b1 != 2) {
#line 11
    tmp = 1;
  } else {
#line 11
    if ((int )u.c.b2 != 2) {
#line 11
      tmp = 1;
    } else {
#line 11
      tmp = 0;
    }
  }
#line 11
  return (tmp);
}
}
#line 14 "930208-1.c"
int main(void) 
{ T u ;
  int tmp ;

  {
#line 17
  u.c.b1 = (char)2;
#line 18
  u.c.b2 = (char)2;
#line 19
  u.c.b0 = (char )(~ 0);
#line 20
  u.c.b3 = (char )(~ 0);
#line 21
  tmp = f(u);
#line 21
  if (tmp) {
#line 22
    abort();
  }
#line 23
  exit(0);
}
}
