#include <stdio.h>
#include <stdlib.h>

int je_li_fibonaci(int broj)
{
    if(broj<=0) return 0;
    int a=0,b=1;
    while(a+b<=broj) {
        if(a+b==broj) return 1;
        int tmp=b;
        b=a+b;
        a=tmp;
    }
    return 0;
}
void ubaci(int *niz, int vel)
{
    int *p=niz;
    while(p<niz+vel)
    {
        int broj=abs(*p);
        int suma=0;
        while(broj)
        {
            suma+=broj%10;
            broj/=10;
        }
        int *q=niz+vel;
        while(q>p+1)
        {
            *q=*(q-1);
            q--;
        }
        vel++;
        p++;
        *p=suma;
        p++;
    }
}
int izbaci (int *niz, int vel)
{
    int *p=niz;
    while(p<niz+vel)
    {
        if(je_li_fibonaci(*p))
        {
            int *q=p;
            vel--;
            while(q<niz+vel)
            {
                *q=*(q+1);
                q++;
            }
            p--;
        }
        p++;
    }
    return vel;
}
int main()
{
    int niz[20];
    int vel=10, i;
    for(i=0;i<vel;i++)
        scanf("%d", &niz[i]);
    ubaci(niz,vel);
    vel=izbaci(niz,2*vel);
    for(i=0;i<vel;i++)
        printf("%d ", niz[i]);
    return 0;
    
}