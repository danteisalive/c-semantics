/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 5 "align-2.c"
struct a_short {
   char c ;
   short s ;
};
#line 6 "align-2.c"
struct a_int {
   char c ;
   int i ;
};
#line 7 "align-2.c"
struct b_int {
   short s ;
   int i ;
};
#line 8 "align-2.c"
struct a_float {
   char c ;
   float f ;
};
#line 9 "align-2.c"
struct b_float {
   short s ;
   float f ;
};
#line 10 "align-2.c"
struct a_double {
   char c ;
   double d ;
};
#line 11 "align-2.c"
struct b_double {
   short s ;
   double d ;
};
#line 12 "align-2.c"
struct c_double {
   int i ;
   double d ;
};
#line 13 "align-2.c"
struct d_double {
   float f ;
   double d ;
};
#line 14 "align-2.c"
struct a_ldouble {
   char c ;
   long double ld ;
};
#line 15 "align-2.c"
struct b_ldouble {
   short s ;
   long double ld ;
};
#line 16 "align-2.c"
struct c_ldouble {
   int i ;
   long double ld ;
};
#line 17 "align-2.c"
struct d_ldouble {
   float f ;
   long double ld ;
};
#line 18 "align-2.c"
struct e_ldouble {
   double d ;
   long double ld ;
};
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 5 "align-2.c"
struct a_short s_c_s  =    {(char )'a', (short)13};
#line 6 "align-2.c"
struct a_int s_c_i  =    {(char )'b', 14};
#line 7 "align-2.c"
struct b_int s_s_i  =    {(short)15, 16};
#line 8 "align-2.c"
struct a_float s_c_f  =    {(char )'c', (float )17.0};
#line 9 "align-2.c"
struct b_float s_s_f  =    {(short)18, (float )19.0};
#line 10 "align-2.c"
struct a_double s_c_d  =    {(char )'d', 20.0};
#line 11 "align-2.c"
struct b_double s_s_d  =    {(short)21, 22.0};
#line 12 "align-2.c"
struct c_double s_i_d  =    {23, 24.0};
#line 13 "align-2.c"
struct d_double s_f_d  =    {(float )25.0, 26.0};
#line 14 "align-2.c"
struct a_ldouble s_c_ld  =    {(char )'e', (long double )27.0};
#line 15 "align-2.c"
struct b_ldouble s_s_ld  =    {(short)28, (long double )29.0};
#line 16 "align-2.c"
struct c_ldouble s_i_ld  =    {30, (long double )31.0};
#line 17 "align-2.c"
struct d_ldouble s_f_ld  =    {(float )32.0, (long double )33.0};
#line 18 "align-2.c"
struct e_ldouble s_d_ld  =    {34.0, (long double )35.0};
#line 20 "align-2.c"
int main(void) 
{ 

  {
#line 22
  if ((int )s_c_s.c != 97) {
#line 22
    abort();
  }
#line 23
  if ((int )s_c_s.s != 13) {
#line 23
    abort();
  }
#line 24
  if ((int )s_c_i.c != 98) {
#line 24
    abort();
  }
#line 25
  if (s_c_i.i != 14) {
#line 25
    abort();
  }
#line 26
  if ((int )s_s_i.s != 15) {
#line 26
    abort();
  }
#line 27
  if (s_s_i.i != 16) {
#line 27
    abort();
  }
#line 28
  if ((int )s_c_f.c != 99) {
#line 28
    abort();
  }
#line 29
  if ((double )s_c_f.f != 17.0) {
#line 29
    abort();
  }
#line 30
  if ((int )s_s_f.s != 18) {
#line 30
    abort();
  }
#line 31
  if ((double )s_s_f.f != 19.0) {
#line 31
    abort();
  }
#line 32
  if ((int )s_c_d.c != 100) {
#line 32
    abort();
  }
#line 33
  if (s_c_d.d != 20.0) {
#line 33
    abort();
  }
#line 34
  if ((int )s_s_d.s != 21) {
#line 34
    abort();
  }
#line 35
  if (s_s_d.d != 22.0) {
#line 35
    abort();
  }
#line 36
  if (s_i_d.i != 23) {
#line 36
    abort();
  }
#line 37
  if (s_i_d.d != 24.0) {
#line 37
    abort();
  }
#line 38
  if ((double )s_f_d.f != 25.0) {
#line 38
    abort();
  }
#line 39
  if (s_f_d.d != 26.0) {
#line 39
    abort();
  }
#line 40
  if ((int )s_c_ld.c != 101) {
#line 40
    abort();
  }
#line 41
  if (s_c_ld.ld != (long double )27.0) {
#line 41
    abort();
  }
#line 42
  if ((int )s_s_ld.s != 28) {
#line 42
    abort();
  }
#line 43
  if (s_s_ld.ld != (long double )29.0) {
#line 43
    abort();
  }
#line 44
  if (s_i_ld.i != 30) {
#line 44
    abort();
  }
#line 45
  if (s_i_ld.ld != (long double )31.0) {
#line 45
    abort();
  }
#line 46
  if ((double )s_f_ld.f != 32.0) {
#line 46
    abort();
  }
#line 47
  if (s_f_ld.ld != (long double )33.0) {
#line 47
    abort();
  }
#line 48
  if (s_d_ld.d != 34.0) {
#line 48
    abort();
  }
#line 49
  if (s_d_ld.ld != (long double )35.0) {
#line 49
    abort();
  }
#line 50
  return (0);
}
}
