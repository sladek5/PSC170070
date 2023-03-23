#include <stdio.h>
#include <stdlib.h>

void zamiana (int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int n = 7;
    int m = 3;
    int *x = &n;
    int *y = &m;
    zamiana(x, y);
    printf("%i", n);
    printf("%i", m);
}
