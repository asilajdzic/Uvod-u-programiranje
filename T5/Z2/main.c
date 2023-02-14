#include <stdio.h>
#define BROJ_EL 10
int main() {
	int niz[BROJ_EL],suma,i, k=0, sumaparnih,max,min;
	float prosjek, prosjekparnih;
	suma=0;
	sumaparnih=0;
	for (i=0;i<BROJ_EL;i++)
		{
			printf("Unesite %d. cijeli broj: ",i+1);
			scanf("%d",&niz[i]);
			suma=suma+niz[i];
			if(niz[i]%2==0)
				{
					sumaparnih=sumaparnih+niz[i];
					k++;
				}
		}
	prosjek= (float)suma/BROJ_EL;
	if(k!=0)
	{
		prosjekparnih= (float)sumaparnih/k;
	}
	else 
		
		prosjekparnih=0;
	max=niz[0];
	min=niz[0];
	for(i=1;i<BROJ_EL;i++)
		{
			if(max<niz[i])
				{
					max=niz[i];
				}
			if(min>niz[i])
				{
					min=niz[i];
				}
		}
	printf("Srednja vrijednost unesenih brojeva je %.2f.\n",prosjek);
	printf("Srednja vrijednost parnih brojeva je %.2f.\n",prosjekparnih);
	printf("Najveci element je %d a najmanji %d.",max,min);
	return 0;
}