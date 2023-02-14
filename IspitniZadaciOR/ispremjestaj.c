#include <stdio.h>
#include <string.h>
//idemo kroz string i trazimo rijec pod tim rednim brojem
//zapisemo rijec u drugi string
//s pokazuje poslije rijeci
//pomjerimo string udesno za duzinu te rijeci
//ubacimo tu rijec na pocetak
char* ispremjestaj(char *s, int *niz, int vel)
{
    int i;
    char *adresa=s;
    for(i=0; i<vel; i++) {
        int brojac=0;
        s=adresa;
        char rijec[100];
        int razmak=1;
        while(*s) {
            if(*s==' ')
                razmak=1;
            else if(razmak) {
                razmak=0;
                brojac++;
            }
            if(brojac==niz[i]) {
                char* pocetak=s;
                int j=0;
                while (*s>='A' && *s<='Z' || *s>='a' && *s<='z') {
                    rijec[j]=*s;
                    j++;
                    s++;
                }
                rijec[j]=*s;
                j++;
                rijec[j]='\0';
                pocetak--;
                while(pocetak>=adresa) {
                    *s=*pocetak;
                    s--;
                    pocetak--;
                }
                pocetak=adresa;
                for(j=0; j<strlen(rijec); j++) {
                    *pocetak=rijec[j];
                    pocetak++;
                }
                break;
            }
            s++;
        }
    }
    return adresa;
}
int main()
{
    int niz[4]= {4,2,5,8};
    char string[]="Danas je bio lijep i suncan dan";
    printf("%s\n", string);
    ispremjestaj(string, niz, 4);
    printf("%s", string);
    return 0;
}