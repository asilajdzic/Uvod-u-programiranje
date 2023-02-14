#include <stdio.h>
#include <stdlib.h>
struct Datum {
	int dan, mjesec, godina;
};
struct Student {
	char ime[20], prezime[20];
	struct Datum datum_rodjenja;
};
int prestupna(int godina)
{
	if(godina%4==0 && godina%100!=0 || godina%400==0)
		return 1;
	return 0;
}
int broj_dana(struct Datum d)
{
	int ukupno=0,i;
	int bdum[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(prestupna(d.godina)) bdum[2]++;
	for(i=1; i<d.godina; i++)
		ukupno+=365+prestupna(i);
	for(i=1; i<d.mjesec; i++)
		ukupno+=bdum[i];
	ukupno+=d.dan;

	return ukupno;
}
void period(struct Student studenti[],int vel,int D)
{
	int i,j;
	for(i=0; i<vel; i++) {
		for(j=i+1; j<vel; j++) {
			if(abs(broj_dana(studenti[i].datum_rodjenja)-broj_dana(studenti[j].datum_rodjenja))==D)
				printf("%s %s - %s %s\n",studenti[i].ime,studenti[i].prezime,studenti[j].ime,studenti[j].prezime);
		}
	}
}
/*void zapisi(struct Student studenti[], int vel)
{
	int i;
	FILE* izlaz;
	if ((izlaz = fopen("studenti.dat","wb")) == NULL) {
		printf("Greska");
		exit(1);
	}
/*	for(i=0;i<vel;i++)
	{
	fwrite(studenti[i].ime,sizeof(char),1,izlaz);
	fclose(izlaz);
	if ((izlaz = fopen("studenti.dat","ab")) == NULL) {
		printf("Greska");
		exit(1);
	}
	fwrite(studenti[i].prezime,sizeof(char),1,izlaz);
		fclose(izlaz);
	if ((izlaz = fopen("studenti.dat","ab")) == NULL) {
		printf("Greska");
		exit(1);
	}
	fwrite(&studenti[i].datum_rodjenja.dan,sizeof(unsigned char),1,izlaz);
		fclose(izlaz);
	if ((izlaz = fopen("studenti.dat","ab")) == NULL) {
		printf("Greska");
		exit(1);
	}
	fwrite(&studenti[i].datum_rodjenja.mjesec,sizeof(unsigned char),1,izlaz);
		fclose(izlaz);
	if ((izlaz = fopen("studenti.dat","ab")) == NULL) {
		printf("Greska");
		exit(1);
	}
	fwrite(&studenti[i].datum_rodjenja.godina,sizeof(unsigned short),1,izlaz);
	}	
	fwrite(studenti,sizeof(struct Student),vel,izlaz);
	fclose(izlaz);
}	*/
int main()
{
	struct Student niz[5] = {
		{"Mujo", "Mujic", {1, 1, 2000}},
		{"Pero", "Peric", {30, 1, 2000}},
		{"Fata", "Fatic", {3, 12, 1999}},
		{"Sara", "Sarac", {1, 2, 2000}},
		{"Dzana", "Dzanic", {1, 3, 2000}}
	};
	period(niz, 5, 29);
	return 0;
}
