#include <stdio.h>
#define VISINA 100
#define SIRINA 100

int main()
{
    int M, N, i, j, mat[VISINA][SIRINA];
    do {
        printf("Unesite brojeve M i N: ");
        scanf("%d%d", &M, &N);
        if (M <= 0 || M > 100 || N <= 0 || N > 100) {
            printf ("Neispravan unos!\n");
        }
    } while (M <= 0 || M > 100 || N <= 0 || N > 100);
    printf("Unesite clanove matrice: ");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int ista=1;
    int suma=0;
    for(i=0;i<N;i++)
        suma+=mat[0][i];
    for(i=0;i<M;i++)
    {
        int suma2=0;
        for(j=0;j<N;j++)
            suma2+=mat[i][j];
        if(suma!=suma2) ista=0;
    }
    if(ista) printf("DA ");
    else printf("NE ");
    suma=0;
    ista=1;
    for(i=0;i<M;i++)
        suma+=mat[i][0];
    for(i=0;i<N;i++)
    {
        int suma2=0;
        for(j=0;j<M;j++)
            suma2+=mat[j][i];
        if(suma!=suma2) ista=0;
    }
    if(ista) printf("DA");
    else printf("NE");
    return 0;
}
