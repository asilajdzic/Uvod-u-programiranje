#include <stdio.h>
int main()
{
    int i,n;
    printf("Unesite broj clanova niza: ");
    scanf("%d", &n);
    int niz[100];
    printf("Unesite niz: ");
    for(i=0;i<n;i++)
        scanf("%d",&niz[i]);
    int histogram[10]={0};
    for(i=0;i<n;i++)
    {
        int broj;
        if(niz[i]<0) broj=niz[i]*(-1);
        else  broj=niz[i];
        if(broj==0) histogram[0]++;
        while(broj)
        {
            histogram[broj%10]++;
            broj/=10;
        }
    }
    int max=0;
    for(i=0;i<10;i++)
    {
        if(histogram[i]>histogram[max]) max=i;
    }
    for(i=0;i<n;i++)
    {
        int broj=0;
        int negativan=0;
        if(niz[i]<0) {
            negativan=1;
            niz[i]*=-1;
        }
        while(niz[i])
        {
            if(niz[i]%10!=max)
            {
                broj*=10;
                broj+=niz[i]%10;
            }
            niz[i]/=10;
        }
        while(broj)
        {
            niz[i]*=10;
            niz[i]+=broj%10;
            broj/=10;
        }
        if(negativan) niz[i]*=-1;
    }
    printf("Niz nakon izbacivanja glasi:");
    for(i=0;i<n;i++)
    {
        printf(" %d", niz[i]);
    }
}