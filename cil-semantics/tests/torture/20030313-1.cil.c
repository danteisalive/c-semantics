/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 1 "20030313-1.c"
struct A {
   unsigned long p ;
   unsigned long q ;
   unsigned long r ;
   unsigned long s ;
};
#line 1 "20030313-1.c"
struct A x  =    {13UL, 14UL, 15UL, 16UL};
#line 6
extern void abort(void) ;
#line 7
extern void exit(int  ) ;
#line 9 "20030313-1.c"
__inline static struct A *bar(void) 
{ struct A *r ;

  {
#line 14
  switch (8) {
  case 2: 
#line 17
  abort();
#line 18
  break;
  case 8: 
#line 20
  r = & x;
#line 21
  break;
  default: 
#line 23
  abort();
#line 24
  break;
  }
#line 26
  return (r);
}
}
#line 29 "20030313-1.c"
void foo(unsigned long *x___0 , int y ) 
{ 

  {
#line 32
  if (y != 12) {
#line 33
    abort();
  }
#line 34
  if (*(x___0 + 0) != 1UL) {
#line 35
    abort();
  } else {
#line 34
    if (*(x___0 + 1) != 11UL) {
#line 35
      abort();
    }
  }
#line 36
  if (*(x___0 + 2) != 2UL) {
#line 37
    abort();
  } else {
#line 36
    if (*(x___0 + 3) != 12UL) {
#line 37
      abort();
    }
  }
#line 38
  if (*(x___0 + 4) != 3UL) {
#line 39
    abort();
  } else {
#line 38
    if (*(x___0 + 5) != 13UL) {
#line 39
      abort();
    }
  }
#line 40
  if (*(x___0 + 6) != 4UL) {
#line 41
    abort();
  } else {
#line 40
    if (*(x___0 + 7) != 14UL) {
#line 41
      abort();
    }
  }
#line 42
  if (*(x___0 + 8) != 5UL) {
#line 43
    abort();
  } else {
#line 42
    if (*(x___0 + 9) != 15UL) {
#line 43
      abort();
    }
  }
#line 44
  if (*(x___0 + 10) != 6UL) {
#line 45
    abort();
  } else {
#line 44
    if (*(x___0 + 11) != 16UL) {
#line 45
      abort();
    }
  }
#line 46
  return;
}
}
#line 48 "20030313-1.c"
int main(void) 
{ unsigned long a[40] ;
  int b ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  struct A *tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  struct A *tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  struct A *tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  struct A *tmp___14 ;

  {
#line 51
  b = 0;
#line 53
  tmp = b;
#line 53
  b ++;
#line 53
  a[tmp] = 1UL;
#line 54
  tmp___0 = b;
#line 54
  b ++;
#line 54
  a[tmp___0] = 11UL;
#line 55
  tmp___1 = b;
#line 55
  b ++;
#line 55
  a[tmp___1] = 2UL;
#line 56
  tmp___2 = b;
#line 56
  b ++;
#line 56
  a[tmp___2] = 12UL;
#line 57
  tmp___3 = b;
#line 57
  b ++;
#line 57
  a[tmp___3] = 3UL;
#line 58
  tmp___4 = b;
#line 58
  b ++;
#line 58
  tmp___5 = bar();
#line 58
  a[tmp___4] = tmp___5->p;
#line 59
  tmp___6 = b;
#line 59
  b ++;
#line 59
  a[tmp___6] = 4UL;
#line 60
  tmp___7 = b;
#line 60
  b ++;
#line 60
  tmp___8 = bar();
#line 60
  a[tmp___7] = tmp___8->q;
#line 61
  tmp___9 = b;
#line 61
  b ++;
#line 61
  a[tmp___9] = 5UL;
#line 62
  tmp___10 = b;
#line 62
  b ++;
#line 62
  tmp___11 = bar();
#line 62
  a[tmp___10] = tmp___11->r;
#line 63
  tmp___12 = b;
#line 63
  b ++;
#line 63
  a[tmp___12] = 6UL;
#line 64
  tmp___13 = b;
#line 64
  b ++;
#line 64
  tmp___14 = bar();
#line 64
  a[tmp___13] = tmp___14->s;
#line 65
  foo(a, b);
#line 66
  exit(0);
}
}
