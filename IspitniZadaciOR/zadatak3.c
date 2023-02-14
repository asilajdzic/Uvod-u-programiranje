#include <math.h>
#include <stdio.h>
#include <string.h>

struct Datum {
    int dan, mjesec, godina;
};
struct Predmet {
    int id;
    char naziv[100];
    double ects;
};
struct Ocjena {
    char imeprezime[100];
    int ocjena;
    struct Predmet predmet;
    struct Datum datum;
};
int brojicifre(struct Datum dat)
{
    int brojaci[10] = {0}, ukupno = 0;
    int a = dat.dan, b = dat.mjesec, c = dat.godina;
    while (a) {
        brojaci[a % 10]++;
        a /= 10;
    }
    while (b) {
        brojaci[b % 10]++;
        b /= 10;
    }
    while (c) {
        brojaci[c % 10]++;
        c /= 10;
    }
    int i;
    for (i = 0; i <= 9; i++) {
        if (brojaci[i])
            ukupno++;
    }
    return ukupno;
}
int zadatak3(struct Ocjena niz[], int vel)
{
    int i,j;
    int min=brojicifre(niz[0].datum);
    for(i=0; i<vel; i++) {
        double ects=0;
        for(j=0; j<vel; j++) {
            if(strcmp(niz[i].imeprezime,niz[j].imeprezime)==0) {
                if(niz[j].ocjena>=6) ects+=niz[j].predmet.ects;
                if(brojicifre(niz[j].datum)<min)   min=brojicifre(niz[j].datum);
            }
        }
        if(ects>=30) {
            for(j=0; j<vel; j++) {
                if(strcmp(niz[i].imeprezime,niz[j].imeprezime)==0) 
                if(brojicifre(niz[j].datum)==min) {
                        int k;
                        for(k=j; k<vel-1; k++) {
                            niz[k]=niz[k+1];
                        }
                        vel--;
                        j--;
                    }
            }
        }
    }
    return vel;
}
int main()
{
    // AT3: Vise uzastopnih izbacivanja
    struct Ocjena niz[6] = {
        { "Mujo Suljic", 10, { 1, "Uvod u programiranje", 25}, { 20, 2, 2020 } },
        { "Mujo Suljic", 6, { 5, "Osnove elektrotehnike", 25}, { 20, 2, 2020 } },
        { "Fata Fatic", 8, { 1, "Uvod u programiranje", 25}, { 19, 1, 2020 } },
        { "Mujo Suljic", 7, { 2, "Inzenjerska fizika 1", 10}, { 11, 1, 2020 } },
        { "Mujo Suljic", 10, { 3, "Inzenjerska matematika 1", 6}, { 20, 1, 2020 } },
        { "Fata Fatic", 8, { 4, "Inzenjerska matematika 1", 25}, { 19, 1, 2020 } }
    };
    int vel = zadatak3(niz, 6);
    int i;
    for (i=0; i<vel; i++)
        printf("%s %s %g\n", niz[i].imeprezime, niz[i].predmet.naziv, niz[i].predmet.ects);
    return 0;
}
