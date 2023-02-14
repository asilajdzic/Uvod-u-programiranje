#include<stdio.h>
struct Osoba {
    char ime[15], prezime[20];
    int telefon;
};
void unesi (char *niz, int velicina)
{
    char znak=getchar();
    if (znak=='\n');
    znak=getchar();
    int i=0;
    while (i<velicina-1 && znak!='\n') {
        niz[i]=znak;
        znak=getchar();
        i++;
    }
    niz[i]='\0';
}
struct Osoba unos_osobe()
{
    struct Osoba o;
    printf ("Unesite ime: ");
    unesi (o.ime, 15);
    printf ("Unesite prezime: ");
    unesi (o.prezime, 20);
    printf ("Unesite broj telefona: ");
    scanf ("%d", &o.telefon);
    return o;
}
void ispis_osobe (struct Osoba o)
{
    printf ("%s %s, Tel: %d\n", o.ime, o.prezime, o.telefon);
}
int main ()
{
    struct Osoba imenik[100];
    int i, k, broj;
    for (i=0; i<100; i++) {
        printf ("Pritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
        scanf ("%d", &broj);
        if (broj==0)
            break;
        else if (broj==1)
            imenik[i]=unos_osobe();
        else if (broj==2) {
            for (k=0; k<i; k++) {
                printf ("%d", k+1);
                ispis_osobe(imenik[k]);
            }
        }
    }
    return 0;
}
