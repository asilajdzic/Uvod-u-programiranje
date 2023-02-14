#include <math.h>
#include <stdio.h>

struct Tacka {
    double koordinata[100];
};
double udaljenost(struct Tacka t1, struct Tacka t2, int dimenzija)
{
    double suma=0;
    int i;
    for(i=0; i<dimenzija; i++) {
        suma+=pow(t1.koordinata[i]-t2.koordinata[i],2);
    }
    return sqrt(suma);
}
int izbaci_najblize(struct Tacka niz[100], int vel, int dimenzija)
{
    if(vel<2) return vel;
    int i,j, indeks1=0, indeks2=1;
    double min=udaljenost(niz[0], niz[1], dimenzija);
    for(i=0; i<vel; i++) {
        for(j=i+1; j<vel; j++) {
            if(udaljenost(niz[i],niz[j],dimenzija)<min) {
                min=udaljenost(niz[i],niz[j],dimenzija);
                indeks1=i;
                indeks2=j;
            }
        }
    }
    printf("%d - %d\n", indeks1, indeks2);
    for(i=0; i<vel; i++) {
        if(i==indeks1) {
            for(j=i+1; j<vel; j++)
                niz[j-1]=niz[j];
            indeks2--;
            vel--;
        }
        if(i==indeks2) {
            for(j=i; j<vel; j++)
                niz[j]=niz[j+1];
            vel--;
        }
    }
    return vel;
}
int main()
{
    struct Tacka niz[100] = {
    {{-2, -8, -3.5, -7.11}},
    {{1, -4.4, -9.01, -0.002}},
    {{-2, -2, -3.5, -7}},
    {{-10, -9.73, -9.01, -8.77}},
    {{-1, 0, -1, -10}}
};
int dimenzija = 4;
int vel = izbaci_najblize(niz, 5, dimenzija);

int i,j;
for (i=0; i<vel; i++) {
    printf("(");
    for (j=0; j<dimenzija-1; j++)
        printf("%g,", niz[i].koordinata[j]);
    printf("%g)\n", niz[i].koordinata[dimenzija-1]);
}
}
