/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 9 "../../lib/includes/string.h"
extern int strcmp(char const   *str1 , char const   *str2 ) ;
#line 17 "../../lib/includes/stdlib.h"
extern void exit(int status ) ;
#line 21
extern void abort(void) ;
#line 7 "20010915-1.c"
int x(int argc , char **argv ) ;
#line 8
int r(char const   *f___0 ) ;
#line 9
char *s(char *v , char **pp ) ;
#line 10
char *m(char *x___0 ) ;
#line 11 "20010915-1.c"
char *u  ;
#line 12 "20010915-1.c"
char *h  ;
#line 13 "20010915-1.c"
int check  =    0;
#line 14 "20010915-1.c"
int o  =    0;
#line 16 "20010915-1.c"
int main(int argc , char **argv ) 
{ char *args[5] ;
  int tmp ;

  {
#line 18
  args[0] = (char *)"a";
#line 18
  args[1] = (char *)"b";
#line 18
  args[2] = (char *)"c";
#line 18
  args[3] = (char *)"d";
#line 18
  args[4] = (char *)"e";
#line 19
  tmp = x(5, args);
#line 19
  if (tmp != 0) {
#line 20
    abort();
  } else {
#line 19
    if (check != 2) {
#line 20
      abort();
    } else {
#line 19
      if (o != 5) {
#line 20
        abort();
      }
    }
  }
#line 21
  exit(0);
}
}
#line 24 "20010915-1.c"
int x(int argc , char **argv ) 
{ int opt ;
  char *g ;
  char *p ;
  char *tmp ;
  int tmp___0 ;

  {
#line 26
  opt = 0;
#line 27
  g = (char *)0;
#line 28
  p = (char *)0;
#line 30
  if (argc > o) {
#line 30
    if (argc > 2) {
#line 30
      if (*(argv + o)) {
#line 32
        g = s(*(argv + o), & p);
#line 33
        if (g) {
#line 35
          tmp = g;
#line 35
          g ++;
#line 35
          *tmp = (char )'\000';
#line 36
          h = s(g, & p);
#line 37
          if ((unsigned long )g == (unsigned long )p) {
#line 38
            h = m(g);
          }
        }
#line 40
        u = s(*(argv + o), & p);
#line 41
        if ((unsigned long )*(argv + o) == (unsigned long )p) {
#line 42
          u = m(*(argv + o));
        }
      } else {
#line 45
        abort();
      }
    } else {
#line 45
      abort();
    }
  } else {
#line 45
    abort();
  }
#line 47
  while (1) {
#line 47
    o ++;
#line 47
    if (! (o < argc)) {
#line 47
      break;
    }
#line 48
    tmp___0 = r((char const   *)*(argv + o));
#line 48
    if (tmp___0 == 0) {
#line 49
      return (1);
    }
  }
#line 51
  return (0);
}
}
#line 54 "20010915-1.c"
char *m(char *x___0 ) 
{ 

  {
#line 54
  abort();
#line 54
  return ((char *)0);
}
}
#line 55 "20010915-1.c"
char *s(char *v , char **pp ) 
{ int tmp ;
  int tmp___0 ;

  {
#line 57
  tmp = strcmp((char const   *)v, "a");
#line 57
  if (tmp != 0) {
#line 58
    abort();
  } else {
#line 57
    tmp___0 = check;
#line 57
    check ++;
#line 57
    if (tmp___0 > 1) {
#line 58
      abort();
    }
  }
#line 59
  *pp = v + 1;
#line 60
  return ((char *)0);
}
}
#line 65
int r(char const   *f___0 ) ;
#line 65 "20010915-1.c"
static char c[2]  = {      (char )'b',      (char )'\000'};
#line 66
int r(char const   *f___0 ) ;
#line 66 "20010915-1.c"
static int cnt  =    0;
#line 63 "20010915-1.c"
int r(char const   *f___0 ) 
{ 

  {
#line 68
  if ((int const   )*f___0 != (int const   )c[0]) {
#line 69
    abort();
  } else {
#line 68
    if ((int const   )*(f___0 + 1) != (int const   )c[1]) {
#line 69
      abort();
    } else {
#line 68
      if (cnt > 3) {
#line 69
        abort();
      }
    }
  }
#line 70
  c[0] = (char )((int )c[0] + 1);
#line 71
  cnt ++;
#line 72
  return (1);
}
}
