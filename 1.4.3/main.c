#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,x;
    scanf("%i", &n);
    scanf("%i", &m);
    scanf("%i", &k);
    for(x=n*n;x<k;x=x*n)
    {
        if (x>m) printf("%i \n", x);
    }
}
