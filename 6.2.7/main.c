#include <stdio.h>
#include <stdlib.h>

void main(void)
{
}

int** alokuj(unsigned int n)
{
    int ** t=malloc(n*sizeof(int*));
    int i;
    for(i=0;i<n;i++)
    {
        t[i] = malloc((i+1)*sizeof(int));
    }
    return t;
}
