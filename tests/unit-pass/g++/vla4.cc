// Test for range-based for with VLAs.
// { dg-do run { target c++1y } }

#include <new>

void f(int i)
{
  int ar[42];
  int j = 0;
  for (int& x : ar)
    x = ++j;
  [&ar]{
    int k = 0;
    for (int x : ar)
      if (x != ++k)
	__builtin_abort();
  }();
}

int main()
{
  f(42);				// OK
}