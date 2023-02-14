#include <stdio.h>
#include <math.h>

int main()
{
    printf("Unesite velicinu niza: ");
    int n;
    int niz[100];
    scanf ("%d", &n);
    int i;
    printf ("Unesite clanove niza: ");
    for (i=0; i<n; i++)
        scanf ("%d", &niz[i]);
    int niz2[100000];
    int j=0;
    for(i=n-1; i>=0; i--) {
        if(niz[i]==0) {
            niz2[j]=0;
            j++;
            niz2[j]=1;
            j++;
        }
        while(niz[i]) {
            int cifra=niz[i]%10;
            int brojac=0;
            while(cifra==niz[i]%10) {
                brojac++;
                niz[i]/=10;
            }
            niz2[j]=cifra;
            j++;
            niz2[j]=brojac;
            j++;
        }
    }
    n=j;
    for(i=0;i<n-2;i+=2)
    {
        if(niz2[i]==niz2[i+2])
        {
            niz2[i+1]+=niz2[i+3];
            for(j=i+2;j<n-2;j++)
                niz2[j]=niz2[j+2];
            n-=2;
            i-=2;
        }
    }
    printf ("Finalni niz glasi: ");
    for (i=n-1; i>0; i-=2)
        printf ("%d %d ", niz2[i-1], niz2[i]);
    return 0;
}