#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char *tekst = "Jakis tam tekst";
    printf("%Iu\n",strlen(tekst));
    wchar_t *tekst2 = "kolejny tekst";
    printf("%lu\n", strlen(tekst2));
}
