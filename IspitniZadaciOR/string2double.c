#include <stdio.h>
#include <math.h>

int string2double (const char *s, double *broj)
{
    const char *pocetak=s;
    while(*s) {
        while(*s>='0' && *s<='9') s++;
        if(!*s) break;
        if(*s!='.') return 0;
        else s++;
        while(*s>='0' && *s<='9') s++;
        if(*s) return 0;
        else break;
        s++;
    }
    s=pocetak;
    int tacka=0;
    *broj=0;
    int stepen=1;
    while(*s) {
        if(*s=='.') tacka=1;
        else if(!tacka) {
            *broj*=10;
            *broj+=*s-'0';
        } else if(tacka) {
            *broj+=(*s-'0')/pow(10,stepen);
            stepen++;
        }
        s++;
    }
    return 1;
}
int main()
{
    double d=0;
    int a=string2double(".456", &d);
    printf("%d %g", a, d);
    return 0;
}
