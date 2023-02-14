#include <stdio.h>
int faktorijel (int broj)
{
	double i,fakt=1;
	for(i=1;i<=broj;i++)	{
		fakt=fakt*i;
	}
	return fakt;
}
int main() {
	int n,i;
	double x,suma=0;
	printf("Unesite broj n u intervalu [1, 12]: ");
	scanf("%d",&n);
	printf("Unesite realan broj x: ");
	scanf("%lf",&x);
	for(i=1;i<=n;i++)	{
		suma+=x/faktorijel(i);
	}
	printf("Suma od 1 do %d za x = %.3lf je %.3lf",n,x,suma);
	return 0;
}
