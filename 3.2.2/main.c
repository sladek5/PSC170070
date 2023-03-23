#include <stdio.h>
#include <stdlib.h>

int *mniejsza (int *a, int *b)
{
    if (*a<*b)
        return a;
    else
        return b;
}
int main()
{
    int n = 3;
    int m = 5;
    int *x = &n;
    int *y = &m;
    printf("%d", mniejsza(x, y));
}
