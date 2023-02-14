#include <stdio.h>
int podniz(int *p1, int *p2, const int *q1, const int *q2)
{
    int *pocetak=p1;
    while(p1<p2)
    {
        if(*p1==*q1)
        {
            const int *poc1=p1,*poc2=q1;
            while(poc1<p2 && poc2<q2 && *poc1==*poc2) {
                poc1++;
                poc2++;
            };
            if(poc2==q2) return p1-pocetak;
        }
        p1++;
    }
    return -1;
}
int main()
{
    int niz[10]={1,2,3,4,5,6,7,8,9,10};
    int niz2[10]={1,2,3,4,5,6,7,8,9,9};
    int k=podniz(niz,niz+10,niz2,niz2+10);
    printf("%d", k);
}