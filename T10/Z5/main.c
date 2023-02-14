#include <stdio.h>
char* ukloni_komentare(char* s)
{
    char *adresa=s;
    while(*s) {
        if(*s=='/') {
            char *kraj=s;
            char *poc=s;
            if(*(s+1)=='/') {
                while(*kraj && *kraj != '\n')
                    kraj++;
                while(*s++=*kraj++);
            }
            if(*(s+1)=='*') {
                int brojac=1;
                kraj++;
                while(*kraj && brojac>0) {
                    if(*kraj=='*' && *(kraj+1)=='/')    brojac--;
                    if(*kraj=='/' && *(kraj+1)=='*') brojac++;
                    kraj++;
                }
                if(brojac==0) {
                    kraj++;
                    while(*s++=*kraj++);
                }
            }
            if(s!=poc)
                s=poc-1;
        }
        s++;
    }
    return adresa;
}
int main()
{
    char kod[] = "/*Komentar na \n   samom pocetku*/test/*U C komentarima\nse mogu\nnalaziti i novi\nredovi*/tri/*jos jedan na kraju*/";
    printf("%s", ukloni_komentare(kod));
    return 0;
}
