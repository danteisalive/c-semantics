/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 2 "pr36034-1.c"
double x[5][10]  = { {        (double )10,        (double )11,        (double )12,        (double )13, 
            (double )14,        (double )15,        (double )-1,        (double )-1, 
            (double )-1,        (double )-1}, 
   {        (double )21,        (double )22,        (double )23,        (double )24, 
            (double )25,        (double )26,        (double )-1,        (double )-1, 
            (double )-1,        (double )-1}, 
   {        (double )32,        (double )33,        (double )34,        (double )35, 
            (double )36,        (double )37,        (double )-1,        (double )-1, 
            (double )-1,        (double )-1}, 
   {        (double )43,        (double )44,        (double )45,        (double )46, 
            (double )47,        (double )48,        (double )-1,        (double )-1, 
            (double )-1,        (double )-1}, 
   {        (double )54,        (double )55,        (double )56,        (double )57, 
            (double )58,        (double )59,        (double )-1,        (double )-1, 
            (double )-1,        (double )-1}};
#line 7 "pr36034-1.c"
double tmp[5][6]  ;
#line 9 "pr36034-1.c"
void ( __attribute__((__noinline__)) test)(void) 
{ int i ;

  {
#line 13
  i = 0;
#line 13
  while (i < 5) {
#line 15
    tmp[i][0] = x[i][0];
#line 16
    tmp[i][1] = x[i][1];
#line 17
    tmp[i][2] = x[i][2];
#line 18
    tmp[i][3] = x[i][3];
#line 19
    tmp[i][4] = x[i][4];
#line 20
    tmp[i][5] = x[i][5];
#line 13
    i ++;
  }
#line 22
  return;
}
}
#line 24 "pr36034-1.c"
int main(void) 
{ int i ;
  int j ;

  {
#line 27
  test();
#line 28
  i = 0;
#line 28
  while (i < 5) {
#line 29
    j = 0;
#line 29
    while (j < 6) {
#line 30
      if (tmp[i][j] == (double )-1) {
#line 31
        abort();
      }
#line 29
      j ++;
    }
#line 28
    i ++;
  }
#line 32
  return (0);
}
}
