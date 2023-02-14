#include <stdio.h>
struct Osoba {
        char ime[15];
        char prezime[20];
        int telefon;
    };
void unesi(char niz[], int velicina) {
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
struct Osoba unos_osobe()	{
	struct Osoba o;
	printf("Unesite ime: \n");
	unesi(o.ime,15);
	printf("Unesite prezime: \n");
	unesi(o.prezime,20);
	printf("Unesite broj telefona: \n");
	scanf("%d",&o.telefon);
	return o;
}
void ispis_osobe(struct Osoba o)	{
	printf("%s %s, Tel: %d\n",o.ime,o.prezime,o.telefon);
}
int main() {
	struct Osoba imenik[100];
	int opcija,i,k=0;
	do 
	{
		printf("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: \n");
		scanf("%d",&opcija);
		if(opcija==1)
		{
			imenik[k]=unos_osobe();
			k++;
		}
		else if(opcija==2)
		{
			for(i=0;i<k;i++)
			{
				printf("%d. ",i+1);
				ispis_osobe(imenik[i]);
			}
		}
	}
	while(opcija);
	return 0;
}
