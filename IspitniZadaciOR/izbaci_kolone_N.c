#include <stdio.h>

int max(int mat[100][100], int visina, int sirina)
{
    int i, j,k, l,broj = mat[0][0],brojac = 0, maxBrojac = 0, max=mat[0][0];
    for(i=0; i<visina; i++) {
        for(j=0; j<sirina; j++) {
            broj = mat[i][j];
            brojac = 0;
            for(k=0; k<visina; k++) {
                for(l=0; l<sirina; l++) {
                    if(mat[k][l] == broj) brojac++;
                }
            }
            if(brojac > maxBrojac) {
                max = broj;
                maxBrojac=brojac;
            }
            else if(brojac == maxBrojac && broj < max) max = broj;
        }
    }
    return max;
}

int izbaci_kolone(int mat[100][100], int visina, int sirina, int N)
{
    int i, j, k, l;
    for(i=0; i<visina; i++) {
        for(j=0; j<sirina; j++) {
            if(mat[i][j] == N) {
                for(l=j+1; l<sirina; l++) {
                    for(k=0; k<visina; k++)
                        mat[k][l-1]=mat[k][l];
                }
                sirina--;
                j--;
            }
        }
    }
    return sirina;
}

int main()
{
    int visina, sirina, mat[100][100], i, j, N,k=0;
    printf("Unesite sirinu i visinu matrice: ");
    scanf("%d %d", &sirina, &visina);

    for (i = 0; i < visina; i++) {
        printf("Unesite elemente %d. reda: ", i + 1);
        for (j = 0; j < sirina; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    while(1) {
        k++;
        N = max(mat,visina,sirina);
        sirina = izbaci_kolone(mat,visina,sirina,N);
        printf("Nakon %d. prolaza ", k);
        if(sirina) printf("matrica glasi: \n");
        else {
            printf("matrica je prazna");
            break;
        }
        for(i = 0; i < visina; i++) {
            for(j=0; j<sirina; j++) {
                printf("%4d", mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
