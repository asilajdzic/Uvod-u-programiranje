#include <stdio.h>
#include <stdlib.h>
void IzbaciNajveciBroj(char *s)
{
    char *pocetak=s;
    int maks;
    int postoji_broj=0;
    while(*s) {
        if(*s>='0' && *s<='9') {
            postoji_broj=1;
            maks=0;
            int negativan=1;
            while(*s && *s>='0' && *s<='9') {
                if(s!=pocetak && *(s-1)=='-')
                negativan=-1;
                maks*=10;
                maks+=*s-'0';
                s++;
            }
            maks*=negativan;
            s--;
        }
        s++;
    }
    if(!postoji_broj) exit(1);
    s=pocetak;
    while(*s) {
        int broj=0;
        postoji_broj=0;
        int negativan=1;
        while(*s && *s>='0' && *s<='9') {
            if(s!=pocetak && *(s-1)=='-')
                negativan=-1;
            postoji_broj=1;
            broj*=10;
            broj+=*s-'0';
            s++;
        }
        if(postoji_broj) {
            broj*=negativan;
            if(broj>maks)
                maks=broj;
            s--;
        }
        s++;
    }
    s=pocetak;
    while(*s) {
        int broj=0;
        char *tmp=s;
        int negativan=1;
        while(*s && *s>='0' && *s<='9') {
            if(s!=pocetak && *(s-1)=='-')
                negativan=-1;
            broj*=10;
            broj+=*s-'0';
            s++;
        }
        broj*=negativan;
        if(broj==maks) {
            if(maks<0)
            tmp--;
            while(*s) {
                *tmp=*s;
                tmp++;
                s++;
            }
            *tmp='\0';
            s--;
        }
        s++;
    }
}
int main()
{
    char string[]="u gradovima -8 i -9 izmjerena je temperatura od -23";
    IzbaciNajveciBroj(string);
    printf("%s", string);
    return 0;
}
