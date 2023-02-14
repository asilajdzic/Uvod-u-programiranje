#include <stdio.h>

int main()
{
    int visina, sirina, mat[200][200];
    int i, j, k, da = 1, l;
    do {
        printf("Unesite brojeve M i N: ");
        scanf("%d%d", &visina, &sirina);
        if (visina <= 0 || visina > 200 || sirina <= 0 || sirina > 200) {
            printf("Brojevi nisu u trazenom opsegu.\n");
        }
    } while (visina <= 0 || visina > 200 || sirina <= 0 || sirina > 200);

    printf("Unesite elemente matrice: ");
    for (i = 0; i < visina; i++) {
        for (j = 0; j < sirina; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    /*redovi*/
    for (i = 0; i < visina; i++) {
        for (j = i+1 ; j <visina; j++) {
            da = 1;
            for (k = 0; k < sirina; k++) {
                if (mat[i][k] != mat[j][k]) {
                    da = 0;
                }
            }
            if (da == 1) {
                for (l = j + 1; l < visina; l++) {
                    for (k = 0; k < sirina; k++) {
                        mat[l - 1][k] = mat[l][k];
                    }
                }
                visina--;
                j--;
            }
        }
    }
    /*kolone*/
    for(i=0; i<sirina; i++) {
        for(j=i+1; j<sirina; j++) {
            da=1;
            for(k=0; k<visina; k++) {
                if(mat[k][i]!=mat[k][j])
                    da=0;
            }
            if(da == 1) {
                for(l=j+1; l<sirina; l++) {
                    for(k=0; k<visina; k++)
                        mat[k][l-1]=mat[k][l];
                }
                sirina--;
                j--;
            }
        }
    }
    printf("Nakon izbacivanja redova/kolona matrica glasi: \n");
    for (i = 0; i < visina; i++) {
        for (j = 0; j < sirina; j++) {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
