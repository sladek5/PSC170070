#include <stdio.h>
#include <stdlib.h>

int foo (int *x, int *y)
{
    if (*x>*y) return *x;
    else return *y;
}

int main()
{
    int a = 3, b = 2;
    int *x, *y;
    x = &a;
    y = &b;
    int wynik = foo (*x, *y);
    printf("%i", &wynik);
}
