/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "980506-1.c"
struct decision {
   char enforce_mode ;
   struct decision *next ;
};
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 9 "980506-1.c"
static void clear_modes(struct decision *p ) 
{ 

  {
  goto blah;
  foo: 
#line 16
  p->enforce_mode = (char)0;
  blah: 
#line 18
  if (p) {
    goto foo;
  }
#line 20
  return;
}
}
#line 22 "980506-1.c"
int main(void) 
{ struct decision *p ;

  {
#line 24
  p = (struct decision *)0;
#line 25
  clear_modes(p);
#line 26
  exit(0);
}
}
