#include <stdio.h>

int main()
{
    int niz[101];
    int i=0;
    int n;
    int histogram[10]={0};
    int broj;
    do {
        printf("Unesi clan niza: ");
        scanf("%d", &broj);
        if(broj<=0) break;
        niz[i]=broj;
        i++;
    } while(i<100);
    n=i;
    for(i=0;i<n;i++)
    {
        broj=niz[i];
        while(broj>0)
        {
            int cifra=broj%10;
            broj/=10;
            histogram[cifra]++;
        }
    }
    for(i=0;i<9;i++)
        if(histogram[i]) printf("%d,", i);
    if(histogram[10]) printf("%d.", i);
}
