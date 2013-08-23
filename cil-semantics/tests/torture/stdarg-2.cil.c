/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 9 "../../lib/includes/stdlib.h"
typedef unsigned int size_t;
#line 6 "../../lib/includes/stdarg.h"
typedef void *va_list;
#line 88 "stdarg-2.c"
struct A {
   int i ;
   va_list g ;
   va_list h[2] ;
};
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 27 "../../lib/includes/stdarg.h"
extern va_list __va_inc(va_list *ap , size_t size ) ;
#line 32
extern void __va_start(va_list *ap , void *pN ) ;
#line 37
extern void __va_end(va_list *ap ) ;
#line 6 "stdarg-2.c"
int foo_arg  ;
#line 6 "stdarg-2.c"
int bar_arg  ;
#line 7 "stdarg-2.c"
long x  ;
#line 8 "stdarg-2.c"
double d  ;
#line 9 "stdarg-2.c"
va_list gap  ;
#line 11 "stdarg-2.c"
void foo(int v , va_list ap ) 
{ va_list tmp ;
  va_list tmp___0 ;
  va_list tmp___1 ;
  va_list tmp___2 ;
  va_list tmp___3 ;
  va_list tmp___4 ;
  va_list tmp___5 ;

  {
#line 14
  switch (v) {
  case 5: 
#line 17
  tmp = __va_inc(& ap, (unsigned int )sizeof(int ));
#line 17
  foo_arg = *((int *)tmp);
#line 18
  tmp___0 = __va_inc(& ap, (unsigned int )sizeof(double ));
#line 18
  foo_arg = (int )((double )foo_arg + *((double *)tmp___0));
#line 19
  tmp___1 = __va_inc(& ap, (unsigned int )sizeof(long long ));
#line 19
  foo_arg = (int )((long long )foo_arg + *((long long *)tmp___1));
#line 20
  break;
  case 8: 
#line 22
  tmp___2 = __va_inc(& ap, (unsigned int )sizeof(long long ));
#line 22
  foo_arg = (int )*((long long *)tmp___2);
#line 23
  tmp___3 = __va_inc(& ap, (unsigned int )sizeof(double ));
#line 23
  foo_arg = (int )((double )foo_arg + *((double *)tmp___3));
#line 24
  break;
  case 11: 
#line 26
  tmp___4 = __va_inc(& ap, (unsigned int )sizeof(int ));
#line 26
  foo_arg = *((int *)tmp___4);
#line 27
  tmp___5 = __va_inc(& ap, (unsigned int )sizeof(long double ));
#line 27
  foo_arg = (int )((long double )foo_arg + *((long double *)tmp___5));
#line 28
  break;
  default: 
#line 30
  abort();
  }
#line 32
  return;
}
}
#line 34 "stdarg-2.c"
void bar(int v ) 
{ va_list tmp ;
  va_list tmp___0 ;

  {
#line 37
  if (v == 16386) {
#line 39
    tmp = __va_inc(& gap, (unsigned int )sizeof(int ));
#line 39
    if (*((int *)tmp) != 13) {
#line 40
      abort();
    } else {
#line 39
      tmp___0 = __va_inc(& gap, (unsigned int )sizeof(double ));
#line 39
      if (*((double *)tmp___0) != - 14.0) {
#line 40
        abort();
      }
    }
  }
#line 42
  bar_arg = v;
#line 43
  return;
}
}
#line 45 "stdarg-2.c"
void f1(int i  , ...) 
{ va_list tmp ;

  {
#line 48
  __va_start(& gap, (void *)(& i));
#line 49
  tmp = __va_inc(& gap, (unsigned int )sizeof(long ));
#line 49
  x = *((long *)tmp);
#line 50
  __va_end(& gap);
#line 51
  return;
}
}
#line 53 "stdarg-2.c"
void f2(int i  , ...) 
{ 

  {
#line 56
  __va_start(& gap, (void *)(& i));
#line 57
  bar(i);
#line 58
  __va_end(& gap);
#line 59
  return;
}
}
#line 61 "stdarg-2.c"
void f3(int i  , ...) 
{ va_list aps[10] ;
  va_list tmp ;

  {
#line 65
  __va_start(& aps[4], (void *)(& i));
#line 66
  tmp = __va_inc(& aps[4], (unsigned int )sizeof(long ));
#line 66
  x = *((long *)tmp);
#line 67
  __va_end(& aps[4]);
#line 68
  return;
}
}
#line 70 "stdarg-2.c"
void f4(int i  , ...) 
{ va_list aps[10] ;

  {
#line 74
  __va_start(& aps[4], (void *)(& i));
#line 75
  bar(i);
#line 76
  __va_end(& aps[4]);
#line 77
  return;
}
}
#line 79 "stdarg-2.c"
void f5(int i  , ...) 
{ va_list aps[10] ;

  {
#line 83
  __va_start(& aps[4], (void *)(& i));
#line 84
  foo(i, aps[4]);
#line 85
  __va_end(& aps[4]);
#line 86
  return;
}
}
#line 90 "stdarg-2.c"
void f6(int i  , ...) 
{ struct A a ;
  va_list tmp ;

  {
#line 94
  __va_start(& a.g, (void *)(& i));
#line 95
  tmp = __va_inc(& a.g, (unsigned int )sizeof(long ));
#line 95
  x = *((long *)tmp);
#line 96
  __va_end(& a.g);
#line 97
  return;
}
}
#line 99 "stdarg-2.c"
void f7(int i  , ...) 
{ struct A a ;

  {
#line 103
  __va_start(& a.g, (void *)(& i));
#line 104
  bar(i);
#line 105
  __va_end(& a.g);
#line 106
  return;
}
}
#line 108 "stdarg-2.c"
void f8(int i  , ...) 
{ struct A a ;

  {
#line 112
  __va_start(& a.g, (void *)(& i));
#line 113
  foo(i, a.g);
#line 114
  __va_end(& a.g);
#line 115
  return;
}
}
#line 117 "stdarg-2.c"
void f10(int i  , ...) 
{ struct A a ;
  va_list tmp ;

  {
#line 121
  __va_start(& a.h[1], (void *)(& i));
#line 122
  tmp = __va_inc(& a.h[1], (unsigned int )sizeof(long ));
#line 122
  x = *((long *)tmp);
#line 123
  __va_end(& a.h[1]);
#line 124
  return;
}
}
#line 126 "stdarg-2.c"
void f11(int i  , ...) 
{ struct A a ;

  {
#line 130
  __va_start(& a.h[1], (void *)(& i));
#line 131
  bar(i);
#line 132
  __va_end(& a.h[1]);
#line 133
  return;
}
}
#line 135 "stdarg-2.c"
void f12(int i  , ...) 
{ struct A a ;

  {
#line 139
  __va_start(& a.h[1], (void *)(& i));
#line 140
  foo(i, a.h[1]);
#line 141
  __va_end(& a.h[1]);
#line 142
  return;
}
}
#line 144 "stdarg-2.c"
int main(void) 
{ 

  {
#line 146
  f1(1, 79L);
#line 147
  if (x != 79L) {
#line 148
    abort();
  }
#line 149
  f2(16386, 13, - 14.0);
#line 150
  if (bar_arg != 16386) {
#line 151
    abort();
  }
#line 152
  f3(3, 2031L);
#line 153
  if (x != 2031L) {
#line 154
    abort();
  }
#line 155
  f4(4, 18);
#line 156
  if (bar_arg != 4) {
#line 157
    abort();
  }
#line 158
  f5(5, 1, 19.0, 18LL);
#line 159
  if (foo_arg != 38) {
#line 160
    abort();
  }
#line 161
  f6(6, 18L);
#line 162
  if (x != 18L) {
#line 163
    abort();
  }
#line 164
  f7(7);
#line 165
  if (bar_arg != 7) {
#line 166
    abort();
  }
#line 167
  f8(8, 2031LL, 13.0);
#line 168
  if (foo_arg != 2044) {
#line 169
    abort();
  }
#line 170
  f10(9, 180L);
#line 171
  if (x != 180L) {
#line 172
    abort();
  }
#line 173
  f11(10);
#line 174
  if (bar_arg != 10) {
#line 175
    abort();
  }
#line 176
  f12(11, 2030, 12.0L);
#line 177
  if (foo_arg != 2042) {
#line 178
    abort();
  }
#line 179
  return (0);
}
}
