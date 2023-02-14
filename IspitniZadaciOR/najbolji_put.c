#include <stdio.h>
int manji(int a, int b)
{
    if(a>b) return b;
    return a;
}
int najbolji_put(int m[100][100], int red, int kol)
{
    int m2[100][100];
    m2[0][0]=m[0][0];
    int i;
    int j;
    for(i=1; i<red; i++) {
        m2[0][i]=m2[0][i-1]+m[0][i];
    }
    for(i=1; i<kol; i++) {
        m2[i][0]=m2[i-1][0]+m[i][0];
    }
    for(i=1; i<red; i++) {
        for(j=1; j<kol; j++)
            m2[i][j]=m[i][j]+manji(m2[i-1][j],m2[i][j-1]);
    }
    return m2[red-1][kol-1];
}
int main()
{
    return 0;
}

