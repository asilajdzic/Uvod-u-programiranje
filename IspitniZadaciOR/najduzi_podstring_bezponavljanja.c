#include <stdio.h>
#include <ctype.h>
#include <string.h>
void najduzi_bp(char *s1, char *s2)
{
    *s2='\0';
    char *pocetak=s2;
    while(*s1) {
        s2=pocetak;
        char *p1=s1;
        int br=0;
        while(*p1>='a' && *p1<='z' || *p1>='A' && *p1<='Z') {
            int ponavlja=0;
            char *p2=s1;
            while(p2<p1) {
                if(tolower(*p2)==tolower(*p1)) ponavlja=1;
                p2++;
            }
            if(ponavlja) break;
            br++;
            p1++;
        }
        if(br>strlen(s2)) 
        {
            char *q1=s1;
            while(br)
            {
                *s2=*q1;
                q1++;
                s2++;
                br--;
            }
            *s2='\0';
        }
        s1++;
    }
    s2=pocetak;
}
int main()
{
    char niz[10];
        najduzi_bp ("Ovo je neki primjer teksta", niz);
        printf ("Niz: '%s'", niz);
    
    return 0;
}
