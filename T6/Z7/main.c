#include <stdio.h>
int main() {
	int matrica[10][10],i,j,min,max,mini=0,maxi=0,temp;
	printf("Unesite elemente matrice: ");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)	{
			scanf("%d ", &matrica[i][j]);
		}
	}
	min=matrica[0][0];
	max=matrica[0][0];
	for(i=0;i<10;i++)	{
		for(j=0;j<10;j++)	{
			if(min>matrica[i][j])	{
				mini=i;
				min=matrica[i][j];
			}
			if(max<matrica[i][j])	{
				maxi=i;
				max=matrica[i][j];
			}
		}
	}
	if(mini==maxi)	{
		printf("Najmanji i najveci element se nalaze u istom redu.");
		return 0;
	}
	for(i=0;i<10;i++)	{
		for(j=0;j<10;j++)	{
			if(i==mini)	{
				temp=matrica[i][j];
				matrica[i][j]=matrica[maxi][j];
				matrica[maxi][j]=temp;
			}
		}
	}
	printf("Nakon zamjene matrica glasi:\n");
	for(i=0;i<10;i++)	{
		for(j=0;j<10;j++)	{
			printf("%d ",matrica[i][j]);
		}
		printf("\n");
	}
	return 0;
}
