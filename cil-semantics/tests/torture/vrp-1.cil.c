/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "vrp-1.c"
extern void abort() ;
#line 3
extern void exit(int  ) ;
#line 5 "vrp-1.c"
int f(int a ) 
{ 

  {
#line 6
  if (a != 2) {
#line 7
    a = - a;
#line 8
    if (a == 2) {
#line 9
      return (0);
    }
#line 10
    return (1);
  }
#line 12
  return (1);
}
}
#line 15 "vrp-1.c"
int main(int argc , char **argv ) 
{ int tmp ;

  {
#line 16
  tmp = f(-2);
#line 16
  if (tmp) {
#line 17
    abort();
  }
#line 18
  exit(0);
}
}
