#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wybor;
    float a,b,h,pole;
    printf("wpisz ktora figure geometryczna chcesz wybrac\n""1: kwadrat\n""2: prostokat\n""3: trojkat\n");
    scanf("%i", &wybor);
    if ((wybor>3)||(wybor<1)) printf("nastepnym razem wybierz liczbe od 1 do 3");
    else if (wybor==1)
    {
        scanf("%f", &a);
        pole=a*a;
        printf("%f", pole);
    }
     else if (wybor==2)
    {
        scanf("%f", &a);
        scanf("%f", &b);
        pole=a*b;
        printf("%f", pole);
    }
     else if (wybor==3)
    {
        scanf("%f", &a);
        scanf("%f", &h);
        pole=(a*h)/2;
        printf("%f", pole);
    }
}
