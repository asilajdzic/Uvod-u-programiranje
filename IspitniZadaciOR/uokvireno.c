#include <stdio.h>

void uokvireno(char* tekst, int sirina){
    char * p;
    char * s = tekst;
    while(*s) s++;
    p = s+sirina+1;
    while(s>=tekst) {
        *p = *s;
        s--;
        p--;
    }
    *p='\n';
    p--;
    while(p>=tekst) {
        *p = '*';
        p--;
    }
    s++;
    p++;
}

int main() {
	char tekst[1000] = "Ovo je primjer nekog uokvirenog teksta.";
	uokvireno(tekst, 23);
	printf("%s", tekst);
    return 0;
}