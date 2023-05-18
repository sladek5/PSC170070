#include <stdio.h>
#include <stdlib.h>

int ** dynamic (int n, int m)
{
    int ** tab=(int**) malloc(n * sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=(int**) malloc(m * sizeof(int));
    }
    return tab;
}
int main()
{
    int **wynik = dynamic (4,3);
    return 0;
}
