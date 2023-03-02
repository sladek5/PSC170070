#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,a,b;
    scanf("%i", &x);
    scanf("%i", &y);
    a=x;
    b=y;
    if (x<0) a=-x;
    if (y<0) b=-y;
    if (a>b) printf("%i", x);
    if (b>a) printf("%i", y);
}
