/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 2 "20000314-1.c"
int main(void) 
{ long winds ;

  {
#line 4
  winds = 0L;
#line 6
  while (winds != 0L) {
#line 8
    if (*((char *)winds)) {
#line 9
      break;
    }
  }
#line 12
  if (winds == 0L) {
#line 13
    exit(0);
  } else {
#line 12
    if (winds != 0L) {
#line 13
      exit(0);
    } else {
#line 12
      if (*((char *)winds)) {
#line 13
        exit(0);
      }
    }
  }
#line 15
  abort();
#line 16
  return (0);
}
}
