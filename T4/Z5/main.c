#include <stdio.h>
#include <math.h>
int main() {
	long int a,b,c,izlaz=0,i=0;
	do{
		printf("Unesite broj: ");
		scanf("%ld",&a);
	}
	while(a<0);
	do{printf("Unesite cifru: ");
	scanf("%ld",&b);
	}
	while(b<0);
	do{
		c=a%10;
		if(c!=b)
		{
		i=i+1;
		izlaz=izlaz+c*pow(10,i-1);
		}
		a=a/10;
	}
	while(a!=0);
	printf("Nakon izbacivanja broj glasi %ld.",izlaz);
	printf("\nBroj pomnozen sa dva glasi %ld.",2*izlaz);
	return 0;
}
