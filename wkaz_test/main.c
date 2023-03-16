#include <stdio.h>
#include <stdlib.h>

int foo (int *x, int *y)
{
   if (*x<*y) return *x;
}

int main()
{
    int a = 2, b = 3;
    int x = &a;
    int y = &b;
    foo(x, y);
}
