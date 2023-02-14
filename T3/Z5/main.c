#include <stdio.h>
#include <math.h>
int main() {
	printf("Unesite broj n: ");
	float suma=0;
	int n, i;
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				suma=suma+pow((-1),(i-1))/i;
			}
	printf("Koristeci %d clanova suma je %.3f.",n,suma);
	return 0;
}
