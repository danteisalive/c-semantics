/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 5 "20020423-1.c"
extern void abort(void) ;
#line 6
extern void exit(int  ) ;
#line 8 "20020423-1.c"
int main(void) 
{ int my_int ;
  unsigned int result ;

  {
#line 10
  my_int = 924;
#line 13
  result = ((unsigned int )(my_int * 2 + 4) - 8U) / 2U;
#line 14
  if (result != 922U) {
#line 15
    abort();
  }
#line 17
  result = (((unsigned int )(my_int * 2) - 4U) + 2U) / 2U;
#line 18
  if (result != 923U) {
#line 19
    abort();
  }
#line 21
  result = (((unsigned int )((my_int + 2) * 2) - 8U) - 4U) / 2U;
#line 22
  if (result != 920U) {
#line 23
    abort();
  }
#line 24
  result = ((unsigned int )((my_int + 2) * 2) - 12U) / 2U;
#line 25
  if (result != 920U) {
#line 26
    abort();
  }
#line 28
  result = (((unsigned int )(my_int * 4) + 2U) - 4U) / 2U;
#line 29
  if (result != 1847U) {
#line 30
    abort();
  }
#line 32
  exit(0);
}
}
