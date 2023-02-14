#include <stdio.h>
#include <stdlib.h>
struct FudbalskiTim	 {
	char naziv[50];
	int pobjede;
	int nerijesene;
	int porazi;
	int datih_golova;
	int primljenih_golova;
	int bodovi;
	int gol_razlika;
};
void unesi_string(char niz[], int velicina) {
    char znak = getchar();
    if (znak == '\n') znak=getchar();
    int i = 0;
    while (i < velicina-1 && znak != '\n') {
        niz[i] = znak;
        i++;
        znak = getchar();
    }
    niz[i]='\0';
}
void unesi(int vel)
{
	struct FudbalskiTim novi[10000],tmp;
	int i,max,j,vel2=0;
	for(i=0; i<vel; i++) {
		printf("Unesite naziv %d. tima: ",i+1);
		unesi_string(novi[i].naziv, 50);
		printf("Broj pobjeda: ");
		scanf("%d",&novi[i].pobjede);
		printf("Broj nerijesenih: ");
		scanf("%d",&novi[i].nerijesene);
		printf("Broj poraza: ");
		scanf("%d",&novi[i].porazi);
		printf("Broj datih golova: ");
		scanf("%d",&novi[i].datih_golova);
		printf("Broj primljenih golova: \n");
		scanf("%d",&novi[i].primljenih_golova);
		novi[i].bodovi=novi[i].pobjede*3+novi[i].nerijesene;
		novi[i].gol_razlika=novi[i].datih_golova-novi[i].primljenih_golova;
	}
	for (i=0; i<vel; i++) {
		max = i;
		for (j=i+1; j<vel; j++)
			if (novi[j].bodovi > novi[max].bodovi)
				max = j;
		tmp = novi[i];
		novi[i] = novi[max];
		novi[max] = tmp;
	}
	for(i=0; i<vel; i++) {
		if(novi[i].bodovi>=20)
			vel2++;
	}
	max=0;
	for(i=0;i<vel2;i++)
	{
		if(novi[i].gol_razlika>novi[max].gol_razlika)
		max=i;
	}
	printf("Najvecu gol razliku ima:\n%s",novi[max].naziv);
	printf("\nTabela nakon izbacivanja: ");
	for(i=0;i<vel2;i++)
	{
		printf("\n%d. %s",i+1,novi[i].naziv);
	}
}
int main()
{
	int broj_timova;
	printf("Unesite broj timova: ");
	scanf("%d",&broj_timova);
	unesi(broj_timova);
	return 0;
}
