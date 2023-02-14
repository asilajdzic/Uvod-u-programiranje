#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int proste_sume(int *p1, int vel, int *q1, int kap)
{
    int brojac=0;
    int *q2=q1+kap;
    int *p2=p1+vel;
    while(p1<p2) {
        int broj=abs(*p1);
        int suma=0;
        while(broj) {
            suma+=broj%10;
            broj/=10;
        }
        int i,prost=1;
        for(i=2; i<=sqrt(suma); i++) {
            if(suma%i==0) prost=0;
        }
        if(prost && q1<q2) {
            *q1=*p1;
            q1++;
            brojac++;
        }
        p1++;
    }
    return brojac;
}
int main()
{
    return 0;
}
