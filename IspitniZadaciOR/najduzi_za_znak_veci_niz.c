#include <stdio.h>

void unesi(char niz[], int velicina) {
    char znak=getchar();
    if (znak=='\n') znak=getchar();
    int i=0;
    while (i<velicina-1 && znak!='\n') {
        niz[i]=znak;
        i++;
        znak=getchar();
    }
    niz[i]='\0';
}

int main() {
	/*printf("Lekcija 9: Datoteke, Najduža rastuća sekvenca");*/
    //printf("Unesite naziv ulazne datoteke: ");
    char ulazna[50], izlazna[50];
    unesi(ulazna,50);
    //printf("Unesite naziv izlazne datoteke: ");
    unesi(izlazna,50); 
    FILE* ulaz=fopen(ulazna,"r");
    if(ulaz==NULL) return 1;
    FILE* izlaz=fopen(izlazna,"w");
    if(izlaz==NULL) return 1;
    char znak,stari,slovo_prije;
    int br=0, najduza=0, duzina=0, i=0, index=0;
    while((znak=fgetc(ulaz))!=EOF) {
        if(i>0) {
            if(znak==slovo_prije+1) duzina++;
            else {
                if(duzina>najduza) {
                    najduza=duzina;
                    index=i-najduza;
                }
                duzina=0;
            }
        }
        i++;
        slovo_prije=znak;
    }
    fclose(ulaz);
    FILE* ulaz2=fopen(ulazna,"r");
    i=0;
    while((znak=fgetc(ulaz2))!=EOF) {
        if(i>=index-1 && i<index+najduza) {
            printf("%c", znak);
            fputc(znak,izlaz);
        }
        i++;
    }
    fclose(ulaz2);
    fclose(izlaz);
	return 0;
}