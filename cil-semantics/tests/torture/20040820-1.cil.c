/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 3 "20040820-1.c"
extern void exit(int  ) ;
#line 4
extern void abort(void) ;
#line 6 "20040820-1.c"
void check(int a ) 
{ 

  {
#line 9
  if (a != 1) {
#line 10
    abort();
  }
#line 11
  return;
}
}
#line 13 "20040820-1.c"
void test(int a , int b ) 
{ int tmp ;
  int tmp___0 ;

  {
#line 16
  if (a) {
#line 16
    tmp = 1;
  } else {
#line 16
    tmp = 0;
  }
#line 16
  if (b) {
#line 16
    tmp___0 = 2;
  } else {
#line 16
    tmp___0 = 0;
  }
#line 16
  check(tmp | tmp___0);
#line 17
  return;
}
}
#line 19 "20040820-1.c"
int main(void) 
{ 

  {
#line 21
  test(1, 0);
#line 22
  exit(0);
}
}
