/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 7 "../../lib/includes/string.h"
typedef unsigned int size_t;
#line 8
extern size_t strlen(char *str ) ;
#line 15
extern void *memset(void *ptr , int value , size_t num ) ;
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 3 "980506-3.c"
unsigned char lookup_table[257]  ;
#line 5 "980506-3.c"
static int build_lookup(unsigned char *pattern ) 
{ int m ;
  size_t tmp ;

  {
#line 11
  tmp = strlen((char *)pattern);
#line 11
  m = (int )(tmp - 1U);
#line 13
  m ++;
#line 13
  memset((void *)(lookup_table), m, 257U);
#line 14
  return (m);
}
}
#line 17 "980506-3.c"
int main(int argc , char **argv ) 
{ int tmp ;

  {
#line 21
  tmp = build_lookup((unsigned char *)"bind");
#line 21
  if (tmp != 4) {
#line 22
    abort();
  } else {
#line 24
    exit(0);
  }
#line 25
  return (0);
}
}
