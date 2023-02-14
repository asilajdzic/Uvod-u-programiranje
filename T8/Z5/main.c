#include <stdio.h>
#include <math.h>
void zaokruzi (double *niz,int duzina)	{
	int i;
	for(i=0;i<duzina;i++)	{
		*niz=round(*niz*10);
		*niz=*niz/10.;
		niz++;
	}
}
int main() {
	double niz[] = { 1.23, 3.47, 0, 1.23666 };
	zaokruzi(niz, 4);
	int i;
	for(i = 0; i < 4; i++) {
    printf("%g ", niz[i]);
}
	return 0;
}
