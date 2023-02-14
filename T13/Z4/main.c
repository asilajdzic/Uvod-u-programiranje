#include <stdio.h>
#include <string.h>
struct Student {
    char prezime[20];
    char ime[15];
    int broj_bodova1, broj_bodova2;
};
struct binStudent {
    char prezime[20];
    char ime[15];
    int ukupno;
};
int main() {
    struct Student 
    studenti[1000],tmp;
    struct binStudent binStudent[1000];
    FILE *ulaz, *izlaz;
    int i,j,vel,max;
    if((ulaz=fopen("ispit.txt","r")) == NULL) {
        printf("greska!");
        return 1;
    }
    if((izlaz=fopen("usmeni.dat","wb")) == NULL) {
        fclose(ulaz);
        printf("greska!");
        return 1;
    }
    printf("Izlazna datoteka usmeni.dat je kreirana\n");
    i=0;
    while(i<300 && fscanf(ulaz,"%20s%15s%2d%2d\n",studenti[i].prezime, studenti[i].ime, &studenti[i].broj_bodova1, &studenti[i].broj_bodova2)==4)
    i++;
    vel=i;
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
    for(i=0;i<vel;i++) {
        if(studenti[i].broj_bodova1>=10 && studenti[i].broj_bodova2>=10)
        {
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
    return 0;
}