#include <stdio.h>
#define max 100
void unesi_niz()
{
    double niz[max], broj;
    int i=0;
    FILE* otvori=fopen("niz.bin", "wb");
    while(1) {
        scanf("%lf", &broj);

        if(i>99 || broj==-1) break;
        else {
            niz[i]=broj;
            i++;
        }
    }
    fwrite(niz,sizeof(double),i,otvori);
    fclose(otvori);
}

double srednja_vrijednost ()
{
    FILE *ulaz=fopen("niz.bin", "rb");
    if (ulaz==NULL) return 0;
    double niz[max], suma=0;
    int counter=fread(niz, sizeof(double), 100, ulaz);
    int i;
    for(i=0; i<counter; i++)
        suma+=niz[i];
    fclose(ulaz);
    return suma/counter;
}

int main()
{
    unesi_niz();
    printf("%g\n", srednja_vrijednost());
    return 0;
}
