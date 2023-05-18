#include <stdio.h>
#include <stdlib.h>

int ** dynamic (unsigned int n, unsigned int m)
{
    int ** tab=malloc(n * sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=malloc(m * sizeof(int));
    }
    return tab;
}
