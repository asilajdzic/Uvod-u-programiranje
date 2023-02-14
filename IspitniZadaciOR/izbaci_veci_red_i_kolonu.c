#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

int main()
{
    int m,n;
    int i, j;
    double mat[100][100];
    double sr_vri_mat=0;
    do {
        printf("Unesite vrijednosti M i N: ");
        scanf("%d%d", &m, &n);
        if (m <= 0 || m > 100 || n <= 0 || n > 100) {
            printf("Vrijednosti su van opsega!\n");
        }
    } while (m <= 0 || m > 100 || n <= 0 || n > 100);
    printf("Unesite clanove matrice: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &mat[i][j]);
            sr_vri_mat+=mat[i][j];
        }
    }
    sr_vri_mat/=(m*n);
    for(i=0; i<m; i++) {
        double sr_vri=0;
        for(j=0; j<n; j++)
            sr_vri+=mat[i][j];
        sr_vri/=n;
        if(sr_vri-sr_vri_mat>EPSILON) {
            int k;
            for(k=i+1; k<m; k++)
                for(j=0; j<n; j++)
                    mat[k-1][j]=mat[k][j];

            i--;
            m--;
        }
    }
    for(i=0; i<n; i++) {
        double sr_vri=0;
        for(j=0; j<m; j++)
            sr_vri+=mat[j][i];
        sr_vri/=m;
        if(sr_vri-sr_vri_mat>EPSILON) {
            int k;
            for(k=i+1; k<n; k++)
                for(j=0; j<m; j++)
                    mat[j][k-1]=mat[j][k];
            n--;
            i--;
        }
        printf("Nakon izbacivanja matrica glasi: \n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("%6.1lf", mat[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
