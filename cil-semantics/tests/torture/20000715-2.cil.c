/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 1 "20000715-2.c"
extern void abort(void) ;
#line 2
extern void exit(int  ) ;
#line 4 "20000715-2.c"
unsigned int foo(unsigned int a ) 
{ 

  {
#line 6
  return ((unsigned int )((int )((unsigned char )(a + 1U)) * 4));
}
}
#line 9 "20000715-2.c"
int main(void) 
{ unsigned int tmp ;

  {
#line 11
  tmp = foo((unsigned int )((unsigned char )(~ 0)));
#line 11
  if (tmp) {
#line 12
    abort();
  }
#line 13
  exit(0);
}
}
