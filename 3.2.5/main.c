#include <stdio.h>
#include <stdlib.h>

int suma (int *a, int *b)
{
    int s = *a+*b;
    return s;
}
int main()
{
    int n = 7;
    int m = 5;
    int *x = &n;
    int *y = &m;
    printf("%d", suma (x, y));
}

