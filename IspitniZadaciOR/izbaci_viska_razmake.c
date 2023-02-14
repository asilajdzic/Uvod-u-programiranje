#include <stdio.h>

char *izbaci_viska_razmake(char *str)
{
    char *p1 = str, *p2 = str;
    while (*p1 != '\0') {
        if (*p1 == ' ') {
            if (*p1 != *str) {
                *p2 = *p1;
                p2++;
                p1++;
            }
            while (*p1 == ' ') {
                printf("ostalo je: -%s-\n", p1); 
                p1++;
            }
        } else {
            *p2 = *p1;
            p2++;
            p1++;
        }
    }
    if (p2!=str && *(p2 - 1) == ' ')
        p2--;
    *p2 = '\0';
    return str;
}

int main()
{
    char tekst[] = "     ";   // Samo razmaci
    char tekst2[] = "";       // Prazan string
    char tekst3[] = "Zdravo"; // Nema razmaka
    printf("'%s' ", izbaci_viska_razmake(tekst));
    printf("'%s' ", izbaci_viska_razmake(tekst2));
    printf("'%s'", izbaci_viska_razmake(tekst3));
    return 0;
}
