/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 1 "930429-2.c"
extern void exit(int status ) ;
#line 2
extern void abort(void) ;
#line 3 "930429-2.c"
int f(int b ) 
{ 

  {
#line 6
  return (b >> 1 > 0);
}
}
#line 9 "930429-2.c"
int main(void) 
{ int tmp ;
  int tmp___0 ;

  {
#line 11
  tmp = f(9);
#line 11
  if (! tmp) {
#line 12
    abort();
  }
#line 13
  tmp___0 = f(-9);
#line 13
  if (tmp___0) {
#line 14
    abort();
  }
#line 15
  exit(0);
}
}
