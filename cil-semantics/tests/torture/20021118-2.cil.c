/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int t1(float *f , int i , void (*f1)(double  ) , void (*f2)(float  , float  ) ) 
{ 

  {
  (*f1)(3.0);
  *(f + i) = *(f + (i + 1));
  (*f2)(2.5f, 3.5f);
  return (0);
}
}
int t2(float *f , int i , void (*f1)(double  ) , void (*f2)(float  , float  ) , void (*f3)(float  ) ) 
{ 

  {
  (*f3)(6.0f);
  (*f1)(3.0);
  *(f + i) = *(f + (i + 1));
  (*f2)(2.5f, 3.5f);
  return (0);
}
}
void f1(double d ) 
{ 

  {
  if (d != 3.0) {
    abort();
  }
  return;
}
}
void f2(float f1___0 , float f2___0 ) 
{ 

  {
  if (f1___0 != 2.5f) {
    abort();
  } else {
    if (f2___0 != 3.5f) {
      abort();
    }
  }
  return;
}
}
void f3(float f ) 
{ 

  {
  if (f != 6.0f) {
    abort();
  }
  return;
}
}
int main(void) 
{ float f[3] ;

  {
  f[0] = 2.0f;
  f[1] = 3.0f;
  f[2] = 4.0f;
  t1(f, 0, & f1, & f2);
  t2(f, 1, & f1, & f2, & f3);
  if (f[0] != 3.0f) {
    if (f[1] != 4.0f) {
      abort();
    }
  }
  exit(0);
}
}