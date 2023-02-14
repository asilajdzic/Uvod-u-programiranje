#include <stdio.h>
#include <math.h>
#define epsilon 0.0001
int main()
{
	double niz[200]= {0},prosjek;
	int i,n,j,brojaci[10]= {0},k;
	do	{
		printf("Unesite broj clanova niza: ");
		scanf("%d",&n);
	} while(n<=0 || n>100);
	printf("Unesite niz: ");
	for(i=0; i<n; i++)	{
		scanf("%lf ",&niz[i]);
	}
	for(i=0; i<n-1; i++)	{
		if(fabs(2*niz[i]-niz[i+1])<epsilon)	{
			prosjek=(niz[i]+niz[i+1])/2;
			for(j=n; j>i; j--)
				niz[j]=niz[j-1];
			niz[i+1]=prosjek;
			n++;
			i++;
		}
	}
	printf("Nakon ubacivanja niz glasi: \n");
	for(i=0; i<n; i++)	{
		printf("%g ",niz[i]);
	}
	for(i=0; i<n; i++)	{
		k=niz[i]*10;
		k=k%10;
		brojaci[k]++;
	}
	for(i=0; i<10; i++)	{
		if(brojaci[i]>0)
			printf("\nCifra %d se ponavlja %d puta.",i,brojaci[i]);
	}
	return 0;
}