/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 15 "20020215-1.c"
struct s {
   short i1 ;
   long i2 ;
   short i3 ;
};
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 22 "20020215-1.c"
struct s foo(struct s s ) 
{ 

  {
#line 24
  (s.i2) ++;
#line 25
  return (s);
}
}
#line 28 "20020215-1.c"
int main(void) 
{ struct s s ;
  struct s __constr_expr_0 ;
  struct s tmp ;

  {
#line 30
  __constr_expr_0.i1 = (short)1000;
#line 30
  __constr_expr_0.i2 = 2000L;
#line 30
  __constr_expr_0.i3 = (short)3000;
#line 30
  tmp = foo(__constr_expr_0);
#line 30
  s = tmp;
#line 31
  if ((int )s.i1 != 1000) {
#line 32
    abort();
  } else {
#line 31
    if (s.i2 != 2001L) {
#line 32
      abort();
    } else {
#line 31
      if ((int )s.i3 != 3000) {
#line 32
        abort();
      }
    }
  }
#line 33
  exit(0);
}
}
