/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "930614-2.c"
int main(void) 
{ int i ;
  int j ;
  int k ;
  int l ;
  float x[8][2][8][2] ;

  {
#line 7
  i = 0;
#line 7
  while (i < 8) {
#line 8
    j = i;
#line 8
    while (j < 8) {
#line 9
      k = 0;
#line 9
      while (k < 2) {
#line 10
        l = 0;
#line 10
        while (l < 2) {
#line 12
          if (i == j) {
#line 12
            if (k == l) {
#line 13
              x[i][k][j][l] = (float )0.8;
            } else {
#line 15
              x[i][k][j][l] = (float )0.8;
            }
          } else {
#line 15
            x[i][k][j][l] = (float )0.8;
          }
#line 16
          if ((double )x[i][k][j][l] < 0.0) {
#line 17
            abort();
          }
#line 10
          l ++;
        }
#line 9
        k ++;
      }
#line 8
      j ++;
    }
#line 7
    i ++;
  }
#line 20
  exit(0);
}
}
