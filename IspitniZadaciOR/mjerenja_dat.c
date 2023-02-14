#include <stdio.h>

int main()
{
    FILE* ulaz1=fopen("mjerenja.txt", "r");
    FILE* ulaz2=fopen("zadane.dat", "rb");
    double mjerenja[10000]= {0};
    double zadane[10000]= {0};
    int i=0;
    char znak;
    do {
        fscanf(ulaz1,"%f", &mjerenja[i++]);
    } while(i<10000 && (znak=fgetc(ulaz1))!=EOF);
    int vel=i-1;
    int vel2=fread(zadane,sizeof(double),100000,ulaz2);
    fclose(ulaz1);
    fclose(ulaz2);
}
