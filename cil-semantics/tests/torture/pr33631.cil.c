/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 2 "pr33631.c"
union __anonunion_pthread_mutex_t_3 {
   int __lock ;
};
#line 2 "pr33631.c"
typedef union __anonunion_pthread_mutex_t_3 pthread_mutex_t;
#line 11 "pr33631.c"
struct __anonstruct_r_4 {
   int c ;
   pthread_mutex_t m ;
};
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 9 "pr33631.c"
int main(void) 
{ struct __anonstruct_r_4 r ;

  {
#line 11
  r.c = 0;
#line 11
  r.m.__lock = 0;
#line 12
  if (r.c != 0) {
#line 13
    abort();
  }
#line 14
  return (0);
}
}
