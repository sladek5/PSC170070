#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int m = 4;
    int *x = &n;
    int *y = &m;
    printf("%i", *y);
}
