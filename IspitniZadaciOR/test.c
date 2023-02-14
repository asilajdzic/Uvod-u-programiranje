#include <stdio.h>

int main()
{
    double niz[100];
    int n;
    printf ("Unesite broj clanova niza: ");
    do {
        scanf ("%d", &n);
        if (n<=0 || n>100)
            printf ("Neispravan unos!");
    } while (n<=0 || n>100);
    printf ("Unesite niz: ");
    int i;
    for (i=0; i<n; i++) {
        scanf ("%lf", &niz[i]);
    }
    int j;
    for(i=0; i<n; i++) {
        int brojac=0;
        for(j=0; j<n; j++) {
            if(niz[i]==niz[j])
                brojac++;
        }
        if(brojac!=2) {
            printf("NE");
            return 0;
        }
    }
    printf("DA");
    return 0;
}
