#include <stdio.h>
#include <math.h>
int je_li_fib(int broj)
{
    if(broj==0) return 1;
    int a=0,b=1;
    while(a+b<=broj) {
        if(a+b==broj) return 1;
        int tmp=b;
        b=a+b;
        a=tmp;
    }
    return 0;
}
int provjeri (int mat[100][100], int v)
{
    int i, j;
    for(i=0; i<v; i++) {
        for(j=0;; j++) {
            if(mat[i][j]==-1) break;
            if(j>=99 || mat[i][j]<=0) return 0;
        }
    }
    return 1;
}
int fibonacci_matrica(int mat[100][100], int v)
{
    int i,j;
    for(i=0; i<v; i++) {
        for(j=0; j<100; j++) {
            if(mat[i][j]==-1) break;
            if(!je_li_fib(mat[i][j]))   return 0;
            else if (j>=2) {
                if(mat[i][j]!=mat[i][j-1]+mat[i][j-2]) return 0;
            } else if(j==1) {
                if(!je_li_fib(mat[i][j]-mat[i][j-1])) return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int matrica[100][100] = {
        {1, 1, 2, 3, 5, 8, -1},
        {3, 5, 8, 13, -1},
        {8, -1},
        {-1},
        {13, 21, 34, -1},
        {12, 13, 25, -1}
    };
// Prazna matrica je validna fibonaccijeva matrica
    printf("%d ", fibonacci_matrica(matrica, 0));

// Prvih 5 redova je validno
// Red koji sadrzi samo -1 je validan fibonaccijev niz
// Fragment iz sredine fibonaccijevog niza je validan
    printf("%d ", fibonacci_matrica(matrica, 5));

// Sesti red nije validan iako je 25=12+13 jer se ti brojevi ne nalaze u
// fibonaccijevom nizu koji pocinje od jedinice
    printf("%d ", fibonacci_matrica(matrica, 6));
}
