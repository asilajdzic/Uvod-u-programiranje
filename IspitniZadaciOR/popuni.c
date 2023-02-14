#include <stdio.h>
void popuni(int mat[100][100], int M)
{
 //spiralno od [M][M];
}
int main()
{
    int mat[100][100];
    int M = 5;
    popuni(mat,M);
    int i, j;
    for(i=0; i<M; i++)
    {
        for(j=0; j<M; j++)
            printf(" %d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}