#include <stdio.h>
#include <stdlib.h>

int mniejsza (int *a, int *b)
{
    if (*a<*b)
        return *a;
    else
        return *b;
}
int main()
{
    int n = 5;
    int m = 3;
    int *x = &n;
    int *y = &m;
    printf("%d", mniejsza(x, y));
}
