#include <math.h>
#include <stdio.h>

void zaokruzi1(double *niz, int vel)
{
    int i;
    for (i = 0; i < vel; i++) {
        int negativan = 0;
        if (*(niz + i) < 0) {
            negativan = 1;
            *(niz + i) *= -1;
        }
        *(niz + i) *= 10;
        if (*(niz + i) - (int)(*(niz + i)) >= 0.5)
            (*(niz + i))++;
        *(niz + i) = (int)(*(niz + i));
        *(niz + i) /= 10;
        if (negativan)
            *(niz + i) *= -1;
    }
}

void preslozi(double *niz, int vel, int k)
{
    zaokruzi1(niz, vel);
    int i;
    double novi[100], novi2[100];
    int n1 = 0, n2 = 0;
    int j = 0, l = 0;
    for (i = 0; i < vel; i++) {
        int a = *(niz + i);
        if (a < 0)
            a *= -1;
        a *= 10;
        int suma = 0;
        while (a) {
            suma += a % 10;
            a /= 10;
        }
        if (suma >= k) {
            novi[j] = *(niz + i);
            j++;
            n1++;
        } else {
            novi2[l] = *(niz + i);
            l++;
            n2++;
        }
    }
    for (j = 0; j < n1; j++) {
        *(niz + j) = novi[j];
    }
    for (j = 0; j < n2; j++) {
        *(niz + j + n1) = novi2[j];
    }
}

int main()
{
    int i;
    double niz[] = { 13.1, 15.749999, 15.75, 9.222, 78.1 };
    preslozi(niz, 5, 14);
    printf("Niz glasi: ");
    for (i=0; i<5; i++)
        printf("%g ", niz[i]);
    return 0;
}
