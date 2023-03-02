#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x1,x2,y1,y2,z1,z2,w,wx,wy,x,y;
   scanf("%f", &x1);
   scanf("%f", &y1);
   scanf("%f", &z1);
   scanf("%f", &x2);
   scanf("%f", &y2);
   scanf("%f", &z2);
   w=(x1*y2)-(x2*y1);
   wx=(z1*y2)-(z2*y1);
   wy=(x1*z2)-(x2*z1);
   if ((w==0)&&(wx==0)&&(wy==0)) printf("uklad posiada nieskonczenie wiele rozwiazan");
   else if ((w==0)&&((wx!=0)||(wy!=0))) printf("uklad nie posiada rozwiazan");
   else {
    x=wx/w;
    y=wy/w;
    printf("x=" "%f", x);
    printf("y=" "%f", y);
   }
}
