#include <ctype.h>
#include <stdio.h>


char max_slovo(char *s)
{
    int histogram[26] = {0}, i, imax = 0;
    while (*s) {
        if (*s >= 'a' && *s <= 'z')
            histogram[*s - 'a']++;
        if (*s >= 'A' && *s <= 'Z')
            histogram[*s - 'A']++;
        s++;
    }
    for (i = 1; i < 26; i++) {
        if (histogram[i] > histogram[imax])
            imax = i;
    }
    return imax + 'A';
}
char *izbaci_max_slovo(char *s)
{
    char znak = max_slovo(s), *p = s;
    char *r=s;
    while (*s != '\0') {
        p = s;
        if (toupper(*s) == znak) {
            while (*p != '\0') {
                *p = *(p + 1);
                p++;
            }
            s--;
        }
        s++;
    }
    return r;
}

int main()
{
    char tekst[] = "AAAA11111BBBCC22222       DDD";
    izbaci_max_slovo(tekst);
    printf("%s", tekst);
    return 0;
}
