#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *podstring(char *s1, const char *s2, int cs)
{
    if(!*s1 || !*s2) return NULL;
    if (cs == 1) {
        while (*s1 != '\0') {
            char *p = s1;
            const char *q = s2;
            while (*q == *p) {
                q++;
                p++;
            }
            if (*q == '\0')
                return s1;
            s1++;
        }
    } else {
        while (*s1 != '\0') {
            char *p = s1;
            const char *q = s2;
            while (tolower(*p)==tolower(*q)) {
                q++;
                p++;
            }
            if (*q == '\0')
                return s1;
            s1++;
        }
    }
    return NULL;
}

char *izbaci_tekst(char *str, const char *tekst, int cs)
{
    char *p1;
    while (p1=podstring(str, tekst, cs)) {
        char *p2 = p1 + strlen(tekst);
        while (*p1++=*p2++);
        printf("%s\n",str);
    }
    if(strcmp(str,tekst)==0) *str='\0';
    return str;
}

int main()
{
    char niz[] = "abcABC aBC ABcAbC";
printf("'%s'", izbaci_tekst(niz, "abc", 0));
    return 0;
}
