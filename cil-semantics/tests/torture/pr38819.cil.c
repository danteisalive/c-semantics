/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 1 "pr38819.c"
extern void exit(int  ) ;
#line 2
extern void abort(void) ;
#line 4 "pr38819.c"
int volatile   a  =    (int volatile   )1;
#line 5 "pr38819.c"
int volatile   b  =    (int volatile   )0;
#line 6 "pr38819.c"
int volatile   x  =    (int volatile   )2;
#line 7 "pr38819.c"
int volatile   r  =    (int volatile   )8;
#line 9 "pr38819.c"
void ( __attribute__((__noinline__)) foo)(void) 
{ 

  {
#line 12
  exit(0);
}
}
#line 15 "pr38819.c"
int main(void) 
{ int si1 ;
  int si2 ;
  int i ;

  {
#line 17
  si1 = (int )a;
#line 18
  si2 = (int )b;
#line 21
  i = 0;
#line 21
  while (i < 100) {
#line 22
    foo();
#line 23
    if (x == (int volatile   )8) {
#line 24
      i ++;
    }
#line 25
    r += (int volatile   )(i + si1 % si2);
#line 21
    i ++;
  }
#line 27
  abort();
#line 28
  return (0);
}
}
