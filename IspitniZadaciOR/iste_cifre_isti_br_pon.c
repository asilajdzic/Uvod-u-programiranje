#include <stdio.h>

int *istecifre(int *niz, int vel, int *p)
{
    int histogram1[10]= {0};
    int temp=*p;
    int *pozicija=p;
    int i;
    while(temp) {
        histogram1[temp%10]++;
        temp/=10;
    }
    p++;
    while(p<niz+vel) {
        temp=*p;
        int histogram2[10]= {0};
        while(temp) {
            histogram2[temp%10]++;
            temp/=10;
        }
        int vrati=1;
        for(i=0; i<10; i++) {
            if(histogram1[i]!=histogram2[i]) vrati=0;
        }
        if(vrati) return p;
        p++;
    }
    p=niz;
    while(p<pozicija) {
        temp=*p;
        int histogram2[10]= {0};
        while(temp) {
            histogram2[temp%10]++;
            temp/=10;
        }
        int vrati=1;
        for(i=0; i<10; i++) {
            if(histogram1[i]!=histogram2[i]) vrati=0;
        }
        if(vrati) return p;
        p++;
    }
    return pozicija;
}

int main()
{
    int niz[] = {9, 999, 99, 9, 9998, 999};
    int*p = istecifre(niz, 6, niz+5);
    printf("Broj %d pozicija %d", *p, (int)(p-niz));
    return 0;
}
