/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_test_21 {
   short x ;
} __attribute__((__may_alias__)) ;
typedef struct __anonstruct_test_21 test;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int f(void) 
{ int a ;
  test *p ;

  {
  a = 10;
  p = (test *)(& a);
  p->x = (short)1;
  return (a);
}
}
int main(void) 
{ int tmp ;

  {
  tmp = f();
  if (tmp == 10) {
    abort();
  }
  return (0);
}
}