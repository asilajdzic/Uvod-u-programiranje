#include <stdio.h>
#include <math.h>
int provjeri (int matrica[100][100], int V)
{
	int i,j,validan=0;
	for(i=0; i<V; i++)	{
		for(j=0; j<100; j++)	{
			if(matrica[i][j]==0 || matrica[i][j]<-1)
				return 0;
			else if(matrica[i][j]==-1)	{
				validan++;
				break;
			}
		}
	}
	if(validan==V)
		return 1;
	else return 0;
}
int fibonacci(int n)
{
	int prije=0,prije2=1,broj=1;
	while(broj<n)	{
		broj=prije+prije2;
		prije=prije2;
		prije2=broj;
	}
	return broj;
}
int fibonacci_matrica (int matrica[100][100],int V)
{
	int i,j,k=0;
	for(i=0; i<V; i++)	{
		for(j=0; j<100; j++)	{
			if(matrica[i][j]==-1)
				break;
			else if(fibonacci(matrica[i][j])!=matrica[i][j])
				return 0;
		}
	}
	return 1;
}
int main()
{
	int matrica[100][100]= {0},i,j,V=0,validna,fib;
	do	{
		printf("Unesite visinu matrice: ");
		scanf("%d",&V);
	} while(V<=0);
	printf("Unesite matricu: ");
	for(i=0; i<V; i++)	{
		for(j=0; j<100; j++)	{
			scanf("%d",&matrica[i][j]);
			if(matrica[i][j]<-1 || matrica[i][j]==0)
				j--;
			else if(matrica[i][j]==-1)
				break;
		}
	}
	validna=provjeri(matrica,V);
	if(validna==0)	{
		printf("\nMatrica nije validna.\n");
		return 0;
	} else
		printf("\nMatrica je validna.\n");
	fib=fibonacci_matrica(matrica,V);
	if(fib==0)	{
		printf("Matrica nije Fibonacci matrica.");
	} else
		printf("Matrica je Fibonacci matrica.");
	return 0;
}