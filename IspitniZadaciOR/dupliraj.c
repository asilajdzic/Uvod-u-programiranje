#include <stdio.h>

char *dvostruko (char *s)
{
    char *p1;
    char* pocetak=s;
    while(*s) {
        s++;
    }
    char *kraj=s;
    s=pocetak;
    while(*s) {
        int broj=0;
        int br_cifara=0;
        while(*s>='0' && *s<='9') {
            broj*=10;
            broj+=*s-'0';
            s++;
            br_cifara++;
        }
        if(broj) {
            broj*=2;
            int temp=broj;
            int br_cifara2=0;
            while(temp) {
                temp/=10;
                br_cifara2++;
            }
            if(br_cifara2>br_cifara) {
                char *p=kraj;
                kraj++;
                char *q=kraj;
                while(q>s) {
                    *q=*p;
                    q--;
                    p--;
                }
                s++;
            }
            p1=s;
            p1--;
            while(br_cifara2) {
                *p1=broj%10+'0';
                broj/=10;
                br_cifara2--;
                p1--;
            }
        }
        s++;
    }
    return pocetak;
}

int main()
{
    char tekst[100] = "Za broj 044 ispravno rjesenje je i 088 i 88.";
    printf("'%s'", dvostruko(tekst));
    return 0;
}
