#include <stdio.h>
#include <stdlib.h> /* Zbog funkcije exit() */

struct Student {
	char prezime[20];
	char ime[15];
	int broj_bodova1;
	int broj_bodova2;
};
void upisi()
{
	struct Student novi;
	FILE *ulaz;
	char c;
	if ((ulaz = fopen("ispit.txt","a")) == NULL) {
	printf("Greska pri otvaranju datoteke ispit.txt");
	exit(1);
	}
	c = fgetc(ulaz);
	while(c!=EOF) c = fgetc(ulaz);
	
	printf("Unesite ime: ");
	scanf("%s",novi.ime);
	printf("Unesite prezime: ");
	scanf("%s",novi.prezime);
	printf("Unesite broj bodova na I parcijalnom: ");
	scanf("%d", &novi.broj_bodova1);
	printf("Unesite broj bodova na II parcijalnom: ");
	scanf("%d", &novi.broj_bodova2);
	fprintf(ulaz,"%-20s%-15s%2d %2d\n", novi.prezime, novi.ime, novi.broj_bodova1, novi.broj_bodova2);
	fclose(ulaz);
}
void ispisi()
{
	printf("\n");
	struct Student studenti[300];
	FILE *ulaz;
	int i,j;
	if ((ulaz = fopen("ispit.txt","r")) == NULL) {
		printf("Greska pri otvaranju datoteke ispit.txt");
		exit(1);
	}
	i=0;
	while (i<300 && fscanf(ulaz,"%20s%15s%2d %2d\n", studenti[i].ime, studenti[i].prezime, &studenti[i].broj_bodova1, &studenti[i].broj_bodova2) == 4)
		i++;
		
	for(j=0;j<i;j++){
		printf("%d. %s %s - %d, %d\n", j+1, studenti[j].prezime, studenti[j].ime, studenti[j].broj_bodova1, studenti[j].broj_bodova2);
	}
}
int main() {
	int opcija;
	do
	{
		printf("Unesite 1 za unos, 2 za ispis, 0 za izlaz: ");
		scanf("%d",&opcija);
		if(opcija==1)
		upisi();
		if(opcija==2)
		ispisi();
	}
	while(opcija);
	return 0;
}