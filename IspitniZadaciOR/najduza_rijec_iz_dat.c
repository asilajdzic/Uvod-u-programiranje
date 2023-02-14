#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ulaz;
    char naziv[255], znak;
    printf("Unesite naziv datoteke: ");
    scanf("%s", naziv);
    ulaz=fopen(naziv,"r");
    int i=0, mjesto=0;
    if(ulaz==NULL) {
        printf("Datoteka %s ne postoji", naziv);
        return 1;
    }
    int br=0,pamti=0;
    while((znak=fgetc(ulaz))!=EOF) {
        if(!(znak>='A' && znak<='Z' || znak>='a' && znak<='z')) {
            if(br>pamti) {
                pamti=br;
                mjesto=i-br;
            }
            br=0;
        } else
            br++;
        i++;
    }
    fclose(ulaz);
    i=0;
    ulaz=fopen(naziv,"r");
    while((znak=fgetc(ulaz))!=EOF) {
        if(i==mjesto) {
            printf("%c", znak);
            while((znak=fgetc(ulaz))!=EOF) {
                if(znak>='A' && znak<='Z' || znak>='a' && znak<='z')
                    printf("%c", znak);
                else break;
            }
        }
        if(i>mjesto) break;
        i++;
    }
    fclose(ulaz);
    return 0;
}
