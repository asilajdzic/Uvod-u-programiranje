#include <stdio.h>

int main()
{
    /*printf("Lekcija 9: Datoteke, Najveći broj");*/
    FILE *ulaz = fopen("zadatak.txt", "r");
    if (ulaz == NULL)
        return 1;
    char znak;
    int broj, max, minus=1, postoji=0;
    FILE *izlaz = fopen("rjesenje.txt", "w");
    while((znak=fgetc(ulaz))!=EOF) {
        if(znak=='-') minus=-1;
        else {
            if(znak>='0' && znak<='9') {
                broj=znak-'0';
                while((znak=fgetc(ulaz))>='0' && znak<='9') {
                    broj*=10;
                    broj+=znak-'0';
                }
                broj*=minus;
                if(!postoji) {
                    max=broj;
                    postoji=1;
                } else if(broj>max) max=broj;
            }
            minus=1;
        }
    }
    fprintf(izlaz,"%d", max);
    fclose(ulaz);
    fclose(izlaz);
    return 0;
}
