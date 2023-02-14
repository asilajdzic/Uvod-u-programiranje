#include <stdio.h>

int pronadji_posljednji(const char *str, const char *trazi)
{
    int indeks=-1;
    const char *pocetak=str;
    while(*str) {
        if(*str==*trazi) {
            const char *s=str;
            const char *p=trazi;
            while(*s && *p && *s==*p) {
                s++;
                p++;
            }
            if(!*p)
                indeks=str-pocetak;
        }
        str++;
    }
    return indeks;
}
int main()
{
    const char *n="Danas je divan dan!";
    printf("%d\n", pronadji_posljednji(n,"divan"));
    printf("%d\n", pronadji_posljednji(n,"Divan"));
    printf("%d\n", pronadji_posljednji(n,"Danas"));
    printf("%d\n", pronadji_posljednji(n,"an"));
    printf("%d\n", pronadji_posljednji(n,"an!"));
    printf("%d\n", pronadji_posljednji("abc cde abc" ,"abc"));
    return 0;
}