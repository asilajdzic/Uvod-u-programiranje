#include <stdio.h>
int izbaci_podniz(int *p1, int *p2, const int *q1, const int *q2)
{
    int *pocetak=p1;
    int br=0;
    while(p1<p2) {
        int *t1=p1;
        const int *t2=q1;
        while(t1<p2 && t2<q2 && *t1==*t2) {
            t1++;
            t2++;
        }
        if(t2==q2) {
            int *tmp=p1;
            while(t1<p2) {
                *tmp=*t1;
                t1++;
                tmp++;
            }
            br+=q2-q1;
            p2-=q2-q1;
            p1=pocetak;
            p1--;
        }
        p1++;
    }
    return br;
}
int main()
{
    int niz1[12]= {1,1,2,3,2,1,2,3,3,1,2,3};
    int niz2[3]= {1,2,3};
    int k = izbaci_podniz(niz1, niz1+12, niz2, niz2+3);
    int i;
    for(i=0; i<12-k; i++) printf("%d ",niz1[i]);
    return 0;
}
