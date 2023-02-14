#include <stdio.h>
#include <string.h>

struct Student {
    char ime[20], prezime[20];
    int ocjene[50];
    int br_ocjena;
};

int uporedi (const char *s1, const char *s2)
{
    while(*s1!='\0' && *s2!='\0') {
        if(*s1<*s2) return -1;
        if(*s1>*s2) return 1;
        s1++;
        s2++;
    }
    if(*s1!='\0') return 1;
    if(*s2!='\0') return -1;
    return 0;
}
double racunanje_prosjeka (struct Student student)
{
    double suma=0, prosjek;
    int i=0, broj_ocjena;
    if(student.br_ocjena==0) return 5; /*ako student nema nijednu ocjenu*/
    while(i!=student.br_ocjena) {
        if(student.ocjene[i]==5) return 5; /*ako ima 5 vraca se odmah 5 bez obzira na ostale ocjene*/
        else suma=suma+student.ocjene[i];
        i++;
    }
    broj_ocjena=student.br_ocjena;
    prosjek=suma/broj_ocjena;
    return prosjek;
}
void ispis_stringa (char *s)
{
    while(*s!='\0') {
        printf("%c", *s);
        s++;
    }
}
void ispis_studenta (struct Student student)
{
    ispis_stringa(student.prezime);
    printf(" ");
    ispis_stringa(student.ime);
    printf("\n");
}
void izbacivanje (struct Student *pocetak, struct Student *kraj)
{
    struct Student *p;
    p=pocetak;
    while((p+1)!=kraj) {
        *p=*(p+1);
        p++;
    }
}
int genijalci (struct Student niz[], int vel, double prosjek)
{
    struct Student *pocetak, *kraj;
    struct Student *prvi, *drugi, *treci;
    prvi=NULL, drugi=NULL, treci=NULL;
    double max_prosjek=0;
    pocetak=niz;
    kraj=niz+vel;
    while(pocetak<kraj) {
        if(racunanje_prosjeka(*pocetak)<prosjek) { /*treba izbaciti te clanove*/
            izbacivanje(pocetak, kraj);
            kraj--;
            vel--;
            pocetak--;
        }
        pocetak++;
    }
    /*trazimo prvi drugi i treci max*/
    pocetak=niz;
    while(pocetak!=kraj) {
        if(racunanje_prosjeka(*pocetak)>prosjek && racunanje_prosjeka(*pocetak)>max_prosjek) {
            max_prosjek=racunanje_prosjeka(*pocetak);
            prvi=pocetak;
        } else if(racunanje_prosjeka(*pocetak)==max_prosjek) {
            if(uporedi(pocetak->prezime,prvi->prezime)==-1) prvi=pocetak;
            else if(uporedi(pocetak->prezime, prvi->prezime)==0) {
                if(uporedi(pocetak->ime, prvi->ime)==-1) prvi=pocetak;
            }
        }
        pocetak++;
    }
    max_prosjek=0;
    pocetak=niz;
    while(pocetak!=kraj) {
        if(racunanje_prosjeka(*pocetak)>prosjek && racunanje_prosjeka(*pocetak)>max_prosjek && pocetak!=prvi) {
            max_prosjek=racunanje_prosjeka(*pocetak);
            drugi=pocetak;
        } else if(pocetak!=prvi && racunanje_prosjeka(*pocetak)==max_prosjek) {
            if(uporedi(pocetak->prezime,drugi->prezime)==-1) drugi=pocetak;
            else if(uporedi(pocetak->prezime, drugi->prezime)==0) {
                if(uporedi(pocetak->ime, drugi->ime)==-1) drugi=pocetak;
            }
        }
        pocetak++;
    }
    max_prosjek=0;
    pocetak=niz;
    while(pocetak!=kraj) {
        if(racunanje_prosjeka(*pocetak)>prosjek && racunanje_prosjeka(*pocetak)>max_prosjek && pocetak!=prvi && pocetak!=drugi) {
            max_prosjek=racunanje_prosjeka(*pocetak);
            treci=pocetak;
        } else if(pocetak!=prvi && pocetak!=drugi && racunanje_prosjeka(*pocetak)==max_prosjek) {
            if(uporedi(pocetak->prezime,treci->prezime)==-1) treci=pocetak;
            else if(uporedi(pocetak->prezime, treci->prezime)==0) {
                if(uporedi(pocetak->ime, treci->ime)==-1) treci=pocetak;
            }
        }
        pocetak++;
    }
    if(prvi) ispis_studenta(*prvi);
    if(drugi) ispis_studenta(*drugi);
    if(treci) ispis_studenta(*treci);
    return vel;
}
int main()
{
    /*printf("Lekcija 8: Strukture, Genijalci");*/
    /* AT6: Test vise studenata sa istim imenom, prezimenom i prosjekom */
    struct Student studenti[4] = {
        { "Mujo", "Mujic", { 7,7,7,7,8}, 5},
        { "Beba", "Bebic", { 6,6,6,6,6}, 5},
        { "Mujo", "Mujic", { 7,7,7,7,8}, 5},
        { "Fata", "Fatic", { 7,7,7,7,8}, 5},
    };
    genijalci(studenti, 4, 6.5);
    return 0;
}
