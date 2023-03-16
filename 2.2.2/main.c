#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    int a=1;
    for(int x=1;x<=n;x++)
    {
        a=a*x;
    }
    return a;
}
int main()
{
    int n;
    scanf("%i", &n);
    int wynik = silnia(n);
    printf("%i \n", wynik);
}
