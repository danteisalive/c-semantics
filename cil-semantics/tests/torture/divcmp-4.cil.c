/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

#line 21 "../../lib/includes/stdlib.h"
extern void abort(void) ;
#line 6 "divcmp-4.c"
int test1(int x ) 
{ 

  {
#line 8
  return (x / -10 == 2);
}
}
#line 11 "divcmp-4.c"
int test2(int x ) 
{ 

  {
#line 13
  return (x / -10 == 0);
}
}
#line 16 "divcmp-4.c"
int test3(int x ) 
{ 

  {
#line 18
  return (x / -10 != 2);
}
}
#line 21 "divcmp-4.c"
int test4(int x ) 
{ 

  {
#line 23
  return (x / -10 != 0);
}
}
#line 26 "divcmp-4.c"
int test5(int x ) 
{ 

  {
#line 28
  return (x / -10 < 2);
}
}
#line 31 "divcmp-4.c"
int test6(int x ) 
{ 

  {
#line 33
  return (x / -10 < 0);
}
}
#line 36 "divcmp-4.c"
int test7(int x ) 
{ 

  {
#line 38
  return (x / -10 <= 2);
}
}
#line 41 "divcmp-4.c"
int test8(int x ) 
{ 

  {
#line 43
  return (x / -10 <= 0);
}
}
#line 46 "divcmp-4.c"
int test9(int x ) 
{ 

  {
#line 48
  return (x / -10 > 2);
}
}
#line 51 "divcmp-4.c"
int test10(int x ) 
{ 

  {
#line 53
  return (x / -10 > 0);
}
}
#line 56 "divcmp-4.c"
int test11(int x ) 
{ 

  {
#line 58
  return (x / -10 >= 2);
}
}
#line 61 "divcmp-4.c"
int test12(int x ) 
{ 

  {
#line 63
  return (x / -10 >= 0);
}
}
#line 67 "divcmp-4.c"
int main(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;

  {
#line 69
  tmp = test1(-30);
#line 69
  if (tmp != 0) {
#line 70
    abort();
  }
#line 71
  tmp___0 = test1(-29);
#line 71
  if (tmp___0 != 1) {
#line 72
    abort();
  }
#line 73
  tmp___1 = test1(-20);
#line 73
  if (tmp___1 != 1) {
#line 74
    abort();
  }
#line 75
  tmp___2 = test1(-19);
#line 75
  if (tmp___2 != 0) {
#line 76
    abort();
  }
#line 78
  tmp___3 = test2(0);
#line 78
  if (tmp___3 != 1) {
#line 79
    abort();
  }
#line 80
  tmp___4 = test2(9);
#line 80
  if (tmp___4 != 1) {
#line 81
    abort();
  }
#line 82
  tmp___5 = test2(10);
#line 82
  if (tmp___5 != 0) {
#line 83
    abort();
  }
#line 84
  tmp___6 = test2(-1);
#line 84
  if (tmp___6 != 1) {
#line 85
    abort();
  }
#line 86
  tmp___7 = test2(-9);
#line 86
  if (tmp___7 != 1) {
#line 87
    abort();
  }
#line 88
  tmp___8 = test2(-10);
#line 88
  if (tmp___8 != 0) {
#line 89
    abort();
  }
#line 91
  tmp___9 = test3(-30);
#line 91
  if (tmp___9 != 1) {
#line 92
    abort();
  }
#line 93
  tmp___10 = test3(-29);
#line 93
  if (tmp___10 != 0) {
#line 94
    abort();
  }
#line 95
  tmp___11 = test3(-20);
#line 95
  if (tmp___11 != 0) {
#line 96
    abort();
  }
#line 97
  tmp___12 = test3(-19);
#line 97
  if (tmp___12 != 1) {
#line 98
    abort();
  }
#line 100
  tmp___13 = test4(0);
#line 100
  if (tmp___13 != 0) {
#line 101
    abort();
  }
#line 102
  tmp___14 = test4(9);
#line 102
  if (tmp___14 != 0) {
#line 103
    abort();
  }
#line 104
  tmp___15 = test4(10);
#line 104
  if (tmp___15 != 1) {
#line 105
    abort();
  }
#line 106
  tmp___16 = test4(-1);
#line 106
  if (tmp___16 != 0) {
#line 107
    abort();
  }
#line 108
  tmp___17 = test4(-9);
#line 108
  if (tmp___17 != 0) {
#line 109
    abort();
  }
#line 110
  tmp___18 = test4(-10);
#line 110
  if (tmp___18 != 1) {
#line 111
    abort();
  }
#line 113
  tmp___19 = test5(-30);
#line 113
  if (tmp___19 != 0) {
#line 114
    abort();
  }
#line 115
  tmp___20 = test5(-29);
#line 115
  if (tmp___20 != 0) {
#line 116
    abort();
  }
#line 117
  tmp___21 = test5(-20);
#line 117
  if (tmp___21 != 0) {
#line 118
    abort();
  }
#line 119
  tmp___22 = test5(-19);
#line 119
  if (tmp___22 != 1) {
#line 120
    abort();
  }
#line 122
  tmp___23 = test6(0);
#line 122
  if (tmp___23 != 0) {
#line 123
    abort();
  }
#line 124
  tmp___24 = test6(9);
#line 124
  if (tmp___24 != 0) {
#line 125
    abort();
  }
#line 126
  tmp___25 = test6(10);
#line 126
  if (tmp___25 != 1) {
#line 127
    abort();
  }
#line 128
  tmp___26 = test6(-1);
#line 128
  if (tmp___26 != 0) {
#line 129
    abort();
  }
#line 130
  tmp___27 = test6(-9);
#line 130
  if (tmp___27 != 0) {
#line 131
    abort();
  }
#line 132
  tmp___28 = test6(-10);
#line 132
  if (tmp___28 != 0) {
#line 133
    abort();
  }
#line 135
  tmp___29 = test7(-30);
#line 135
  if (tmp___29 != 0) {
#line 136
    abort();
  }
#line 137
  tmp___30 = test7(-29);
#line 137
  if (tmp___30 != 1) {
#line 138
    abort();
  }
#line 139
  tmp___31 = test7(-20);
#line 139
  if (tmp___31 != 1) {
#line 140
    abort();
  }
#line 141
  tmp___32 = test7(-19);
#line 141
  if (tmp___32 != 1) {
#line 142
    abort();
  }
#line 144
  tmp___33 = test8(0);
#line 144
  if (tmp___33 != 1) {
#line 145
    abort();
  }
#line 146
  tmp___34 = test8(9);
#line 146
  if (tmp___34 != 1) {
#line 147
    abort();
  }
#line 148
  tmp___35 = test8(10);
#line 148
  if (tmp___35 != 1) {
#line 149
    abort();
  }
#line 150
  tmp___36 = test8(-1);
#line 150
  if (tmp___36 != 1) {
#line 151
    abort();
  }
#line 152
  tmp___37 = test8(-9);
#line 152
  if (tmp___37 != 1) {
#line 153
    abort();
  }
#line 154
  tmp___38 = test8(-10);
#line 154
  if (tmp___38 != 0) {
#line 155
    abort();
  }
#line 157
  tmp___39 = test9(-30);
#line 157
  if (tmp___39 != 1) {
#line 158
    abort();
  }
#line 159
  tmp___40 = test9(-29);
#line 159
  if (tmp___40 != 0) {
#line 160
    abort();
  }
#line 161
  tmp___41 = test9(-20);
#line 161
  if (tmp___41 != 0) {
#line 162
    abort();
  }
#line 163
  tmp___42 = test9(-19);
#line 163
  if (tmp___42 != 0) {
#line 164
    abort();
  }
#line 166
  tmp___43 = test10(0);
#line 166
  if (tmp___43 != 0) {
#line 167
    abort();
  }
#line 168
  tmp___44 = test10(9);
#line 168
  if (tmp___44 != 0) {
#line 169
    abort();
  }
#line 170
  tmp___45 = test10(10);
#line 170
  if (tmp___45 != 0) {
#line 171
    abort();
  }
#line 172
  tmp___46 = test10(-1);
#line 172
  if (tmp___46 != 0) {
#line 173
    abort();
  }
#line 174
  tmp___47 = test10(-9);
#line 174
  if (tmp___47 != 0) {
#line 175
    abort();
  }
#line 176
  tmp___48 = test10(-10);
#line 176
  if (tmp___48 != 1) {
#line 177
    abort();
  }
#line 179
  tmp___49 = test11(-30);
#line 179
  if (tmp___49 != 1) {
#line 180
    abort();
  }
#line 181
  tmp___50 = test11(-29);
#line 181
  if (tmp___50 != 1) {
#line 182
    abort();
  }
#line 183
  tmp___51 = test11(-20);
#line 183
  if (tmp___51 != 1) {
#line 184
    abort();
  }
#line 185
  tmp___52 = test11(-19);
#line 185
  if (tmp___52 != 0) {
#line 186
    abort();
  }
#line 188
  tmp___53 = test12(0);
#line 188
  if (tmp___53 != 1) {
#line 189
    abort();
  }
#line 190
  tmp___54 = test12(9);
#line 190
  if (tmp___54 != 1) {
#line 191
    abort();
  }
#line 192
  tmp___55 = test12(10);
#line 192
  if (tmp___55 != 0) {
#line 193
    abort();
  }
#line 194
  tmp___56 = test12(-1);
#line 194
  if (tmp___56 != 1) {
#line 195
    abort();
  }
#line 196
  tmp___57 = test12(-9);
#line 196
  if (tmp___57 != 1) {
#line 197
    abort();
  }
#line 198
  tmp___58 = test12(-10);
#line 198
  if (tmp___58 != 1) {
#line 199
    abort();
  }
#line 201
  return (0);
}
}
