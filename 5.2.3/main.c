#include <stdio.h>
#include <stdlib.h>
int porownaj (tekst, tekst2)
{
    printf("%Iu\n", strlen(tekst));
    printf("%lu\n", strlen(tekst2));
    int a = strlen(tekst);
    int b = strlen(tekst2);
    if (a==b) puts("1");
    else puts("0");
    return 0;
}
int main()
{
    const char *tekst = "Jakis tam tekst";
    const char *tekst2 = "kolejny tekst 2";
    int wynik = porownaj (tekst, tekst2);
    return 0;
}
