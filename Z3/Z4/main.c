#include <stdio.h>
int matrice_permutacija(double A[100][100], double B[100][100], double C[100][100], int M, int N)
{
	double nizA[10000],nizB[10000],nizC[10000],temp;
	int i,j,k=0,max;
	for(i=0; i<M; i++)	{
		for(j=0; j<N; j++)	{
			nizA[k]=A[i][j];
			k++;
		}
	}
	k=0;
	for(i=0; i<M; i++)	{
		for(j=0; j<N; j++)	{
			nizB[k]=B[i][j];
			k++;
		}
	}
	k=0;
	for(i=0; i<M; i++)	{
		for(j=0; j<N; j++)	{
			nizC[k]=C[i][j];
			k++;
		}
	}
	for (i=0; i<k-1; i++) {
		max=i;
		for (j=i+1; j<k; j++) {
			if (nizA[max]<nizA[j])
				max = j;
		}
		temp = nizA[i];
		nizA[i] = nizA[max];
		nizA[max] = temp;
	}
	for (i=0; i<k-1; i++) {
		max=i;
		for (j=i+1; j<k; j++) {
			if (nizB[max]<nizB[j])
				max = j;
		}
		temp = nizB[i];
		nizB[i] = nizB[max];
		nizB[max] = temp;
	}
	for (i=0; i<k-1; i++) {
		max=i;
		for (j=i+1; j<k; j++) {
			if (nizC[max]<nizC[j])
				max = j;
		}
		temp = nizC[i];
		nizC[i] = nizC[max];
		nizC[max] = temp;
	}
	for(i=0; i<k; i++)	{
		if(nizA[i]!=nizB[i] || nizA[i]!=nizC[i])
			return 0;
	}
	return 1;
}
int main()
{
	int i,j,M,N;
	double A[100][100]= {0},B[100][100]= {0},C[100][100]= {0};
	printf("Unesite M: ");
	scanf("%d",&M);
	printf("Unesite N: ");
	scanf("%d",&N);
	printf("Unesite A: ");
	for(i=0; i<M; i++)	{
		for(j=0; j<N; j++)	{
			scanf("%lf", &A[i][j]);
		}
	}
	printf("Unesite B: ");
	for(i=0; i<M; i++)	{
		for(j=0; j<N; j++)	{
			scanf("%lf", &B[i][j]);
		}
	}
	printf("Unesite C: ");
	for(i=0; i<M; i++)	{
		for(j=0; j<N; j++)	{
			scanf("%lf", &C[i][j]);
		}
	}
	printf("%d",matrice_permutacija(A,B,C,M,N));
	return 0;
}
