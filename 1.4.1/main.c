#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,x;
    scanf("%i", &n);
    scanf("%i", &m);
    if ((n<0)||(m<0)) printf("wprowadz liczby dodatnie");
    else{
    x=n*n;
    while (x<m)
    {
        printf("%i", x);
        printf("\n");
        x=x*n;
    }
    }
}
