/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 3 "20020402-1.c"
extern void abort() ;
#line 4
extern void exit(int  ) ;
#line 9 "20020402-1.c"
int main(void) 
{ int listElem[4] ;
  int listSmall[2] ;
  int i ;
  int j ;
  int posGreatest ;
  int greatest ;

  {
#line 11
  listElem[0] = 30;
#line 11
  listElem[1] = 2;
#line 11
  listElem[2] = 10;
#line 11
  listElem[3] = 5;
#line 14
  posGreatest = -1;
#line 14
  greatest = -1;
#line 16
  i = 0;
#line 16
  while (i < 2) {
#line 17
    listSmall[i] = listElem[i];
#line 18
    if (listElem[i] > greatest) {
#line 19
      posGreatest = i;
#line 20
      greatest = listElem[i];
    }
#line 16
    i ++;
  }
#line 24
  i = 2;
#line 24
  while (i < 4) {
#line 25
    if (listElem[i] < greatest) {
#line 26
      listSmall[posGreatest] = listElem[i];
#line 27
      posGreatest = 0;
#line 28
      greatest = listSmall[0];
#line 29
      j = 1;
#line 29
      while (j < 2) {
#line 30
        if (listSmall[j] > greatest) {
#line 31
          posGreatest = j;
#line 32
          greatest = listSmall[j];
        }
#line 29
        j ++;
      }
    }
#line 24
    i ++;
  }
#line 37
  if (listSmall[0] != 5) {
#line 38
    abort();
  } else {
#line 37
    if (listSmall[1] != 2) {
#line 38
      abort();
    }
  }
#line 39
  exit(0);
}
}
