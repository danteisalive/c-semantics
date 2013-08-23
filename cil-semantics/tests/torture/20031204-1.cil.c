/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 6 "20031204-1.c"
typedef unsigned long u32;
#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 10 "../../lib/includes/string.h"
extern char *strcpy(char *s1 , char const   *s2 ) ;
#line 8 "20031204-1.c"
u32 in_aton(char const   *x ) 
{ 

  {
#line 10
  return (168496141UL);
}
}
#line 13 "20031204-1.c"
u32 root_nfs_parse_addr(char *name ) 
{ u32 addr ;
  int octets ;
  char *cp ;
  char *cq ;
  char *tmp ;

  {
#line 16
  octets = 0;
#line 19
  cq = name;
#line 19
  cp = cq;
#line 20
  while (octets < 4) {
#line 21
    while (1) {
#line 21
      if ((int )*cp >= 48) {
#line 21
        if (! ((int )*cp <= 57)) {
#line 21
          break;
        }
      } else {
#line 21
        break;
      }
#line 22
      cp ++;
    }
#line 23
    if ((unsigned long )cp == (unsigned long )cq) {
#line 24
      break;
    } else {
#line 23
      if (cp - cq > 3) {
#line 24
        break;
      }
    }
#line 25
    if ((int )*cp == 46) {
#line 26
      octets ++;
    } else {
#line 25
      if (octets == 3) {
#line 26
        octets ++;
      }
    }
#line 27
    if (octets < 4) {
#line 28
      cp ++;
    }
#line 29
    cq = cp;
  }
#line 32
  if (octets == 4) {
#line 32
    if ((int )*cp == 58) {
      goto _L;
    } else {
#line 32
      if ((int )*cp == 0) {
        _L: /* CIL Label */ 
#line 33
        if ((int )*cp == 58) {
#line 34
          tmp = cp;
#line 34
          cp ++;
#line 34
          *tmp = (char )'\000';
        }
#line 35
        addr = in_aton((char const   *)name);
#line 36
        strcpy(name, (char const   *)cp);
      } else {
#line 38
        addr = 0xffffffffUL;
      }
    }
  } else {
#line 38
    addr = 0xffffffffUL;
  }
#line 40
  return (addr);
}
}
#line 45
int main(void) ;
#line 45 "20031204-1.c"
static char addr[19]  = 
#line 45
  {      (char )'1',      (char )'0',      (char )'.',      (char )'1', 
        (char )'1',      (char )'.',      (char )'1',      (char )'2', 
        (char )'.',      (char )'1',      (char )'3',      (char )':', 
        (char )'/',      (char )'h',      (char )'e',      (char )'l', 
        (char )'l',      (char )'o',      (char )'\000'};
#line 43 "20031204-1.c"
int main(void) 
{ u32 result ;
  u32 tmp ;

  {
#line 46
  tmp = root_nfs_parse_addr(addr);
#line 46
  result = tmp;
#line 47
  if (result != 168496141UL) {
#line 47
    abort();
  }
#line 48
  return (0);
}
}
