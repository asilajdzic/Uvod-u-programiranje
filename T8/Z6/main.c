#include <stdio.h>
void sortiraj (double *niz,int n)
{
	double *i,*j,temp;
	for (i=niz; i<niz+n; i++) {
		for (j=i+1; j<niz+n; j++) {
			if (*j<*i)  {
				temp = *i;
				*i = *j;
				*j = temp;
			}
		}
	}
}
int main()
{
	int vel = 2;
	double niz[] = {0, 0};
	sortiraj(niz, vel);
	int i;
	for(i  = 0; i < vel; i++) {
		printf("%g ", niz[i]);
	}
	return 0;
}
