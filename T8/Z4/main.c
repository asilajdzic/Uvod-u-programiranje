#include <stdio.h>
int drugi(int *niz, int vel)
{
	int max=niz[0], max2=niz[0];
	int i;
	int indeks=-1;
	for(i=0; i<vel; i++) {
		if(niz[i]>max)
			max=niz[i];
	}
	for(i=0; i<vel; i++)
		if(niz[i]<max) {
			max2=niz[i];
			indeks=i;
		}
	for(i=0; i<vel; i++)
		if(niz[i]>max2 && niz[i]<max) {
			indeks=i;
			max2=niz[i];
		}
	return indeks;
}
int main()
{
	int i,niz[1000]= {0};
	printf("Unesite niz brojeva: ");
	for(i=0;; i++)   {
		scanf("%d",&niz[i]);
		if(niz[i]==-1)
			break;
	}
	printf("Indeks drugog po velicini je: %d",drugi(niz,i));
	return 0;
}
