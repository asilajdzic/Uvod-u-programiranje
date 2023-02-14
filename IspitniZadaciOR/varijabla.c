#include <stdio.h>
int varijabla(char *s, char* naziv_varijable)
{
    int vrijednost=0;
    int duzina=0;
    char *p=naziv_varijable;
    int razmak=1;
    while(*p) {
        duzina++;
        p++;
    }
    while(*s) {
        if(!(*s>='A' && *s<='Z' || *s>='a' && *s<='z'))
                razmak=1;
        else if(razmak) {
            razmak=0;
            char *pozicija=s;
            p=naziv_varijable;
            while(*s && s<pozicija+duzina && *(pozicija+duzina)=='=') {
                    if(*s!=*p) break;
                    s++;
                    p++;
                }
                if(*p=='\0') {
                    s++;
                    int negativan=1;
                    if(*s=='-') 
                    {
                        negativan=-1;
                        s++;
                    }
                    while(*s && *s>='0' && *s<='9') {
                        char cifra=*s;
                        vrijednost*=10;
                        vrijednost+=cifra-'0';
                        s++;
                    }
                    return vrijednost*negativan;
                }
            }
        s++;
    }
    return 0;
}
int main()
{
    char string[]="int x, ax; ax=10; x=11; adin=-20;";
    char naziv_varijable[]="adin";
    int vrijednost=varijabla(string, naziv_varijable);
    printf("%d", vrijednost);
    
    return 0;
}