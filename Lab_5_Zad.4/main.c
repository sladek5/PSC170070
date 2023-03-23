#include <stdio.h>
#include <stdlib.h>

int foo (int *wsk1, int *wsk2)
{
    int roznica = *wsk1-*wsk2;
    return roznica;
}
int main()
{
    int n = 7;
    int m = 3;
    int *x = &n;
    int *y = &m;
    printf("%d", foo (x, y));
}
