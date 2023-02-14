
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct binStudent {
	char prezime[20];
	char ime[15];
	int ukupno;
};
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
	if ((ulaz = fopen("ispit.dat","ab")) == NULL) {
		printf("Greska pri otvaranju datoteke ispit.dat");
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
	fwrite(&novi,sizeof(struct Student),1,ulaz);
	fclose(ulaz);
}
void ispisi()
{
	printf("\n");
	struct Student studenti[300];
	FILE *ulaz;
	int j;
	if ((ulaz = fopen("ispit.dat","rb")) == NULL) {
		printf("Greska pri otvaranju datoteke ispit.dat");
		exit(1);
	}
	int zapisano=fread(studenti,sizeof(struct Student),300,ulaz);
	for(j=0; j<zapisano; j++) {
		printf("%d. %s %s - %d, %d\n", j+1, studenti[j].prezime, studenti[j].ime, studenti[j].broj_bodova1, studenti[j].broj_bodova2);
	}
}

int main()
{
	int opcija;
	do {
		printf("Unesite 1 za unos, 2 za ispis, 3 za usmeni, 0 za izlaz: ");
		scanf("%d",&opcija);
		if(opcija==1)
			upisi();
		if(opcija==2)
			ispisi();
		if(opcija==3) {
			struct Student
				studenti[1000],tmp;
			struct binStudent
				binStudent[1000];
			FILE *ulaz, *izlaz;
			int i,j,max;
			if((ulaz=fopen("ispit.dat","rb")) == NULL) {
				printf("greska!");
				exit(1);
			}
			if((izlaz=fopen("usmeni.dat","wb")) == NULL) {
				fclose(ulaz);
				printf("greska!");
				exit(2);
			}
			int vel=fread(studenti,sizeof(struct Student),300,ulaz);
			for(i=0; i<vel; i++) {
				max=i;
				for(j=i+1; j<vel; j++) {
					int ukupno_j=studenti[j].broj_bodova1+studenti[j].broj_bodova2;
					int ukupno_max=studenti[max].broj_bodova1+studenti[max].broj_bodova2;
					if(ukupno_j>ukupno_max)
						max=j;
				}
				tmp=studenti[i];
				studenti[i]=studenti[max];
				studenti[max]=tmp;
			}
			int k=0;
			for(i=0; i<vel; i++) {
				if(studenti[i].broj_bodova1>=10 && studenti[i].broj_bodova2>=10) {
					binStudent[k].ukupno=studenti[i].broj_bodova1+studenti[i].broj_bodova2;
					strcpy(binStudent[k].ime,studenti[i].ime);
					strcpy(binStudent[k].prezime,studenti[i].prezime);
					k++;
				}
			}
			int vel2=k;
			fwrite(binStudent,sizeof(struct Student),vel2,izlaz);
			fclose(ulaz);
			fclose(izlaz);
			printf("Izlazna datoteka usmeni.dat je kreirana\n");
		}
	} while(opcija);
	return 0;
}
