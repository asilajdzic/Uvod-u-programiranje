#include <stdio.h>
struct Tacka {
    int x,y;
};
struct Pravougaonik {
    struct Tacka tacka;
    int visina, sirina;
};
int crtaj_pravougaonike(struct Pravougaonik *niz, int velicina)
{
    int brojac=0;
    int i,j;
    char mat[100][100];
    for(i=0; i<100; i++) {
        for(j=0; j<100; j++)
            mat[i][j]=' ';
    }
    int max=0;
    for(i=0; i<velicina; i++) {
        int x=niz[i].tacka.x;
        int y=niz[i].tacka.y;
        if(x>=0 && x+niz[i].sirina<100 && y>=0 && y+niz[i].visina<100) brojac++;
        if(x+niz[i].visina<100 && x+niz[i].visina>max) max=x+niz[i].visina;
        //idemo s j po x i po y i po x+sirina i po y+sirina i postavljamo *
        for(j=x; j<x+niz[i].sirina; j++) {
            if(j>=0 && j<100 && y>=0 && y<100)
                mat[j][y]='*';
            if(j>=0 && j<=100 && y+niz[i].visina-1>=0 && y+niz[i].visina-1<100)
                mat[j][y+niz[i].visina-1]='*';
        }
        for(j=y; j<y+niz[i].visina; j++) {
            if(j>=0 && j<100 && x>=0 && x<100)
                mat[x][j]='*';
            if(j>=0 && j<100 && x+niz[i].sirina-1>=0 && x+niz[i].sirina-1<100)
                mat[x+niz[i].sirina-1][j]='*';
        }
    }
    for(i=0; i<max; i++) {
        for(j=0; j<100; j++)
            printf("%c", mat[i][j]);
        printf("\n");
    }
    return brojac;
}
int main()
{
    /* AT5: Pravougaonici kompletno van ekrana */
    struct Pravougaonik niz[4] = {{{0, 0}, 5, 5}, {{15, -8}, 5, 5},
        {{-8, 15}, 5, 5}, {{101, 101}, 5, 5}
    };
    int broj_uspjesnih = crtaj_pravougaonike(niz, 4);
    printf("Broj uspjesnih je: %d", broj_uspjesnih);
}