#include <stdio.h>

int main() {
	int matrica[10][10],i,j,min;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)	{
			scanf("%d ", &matrica[i][j]);
		}
	}
	min=matrica[0][0];
	if(i==j)
		{
			for(i=0;i<10;i++)	{
					if(min>matrica[i][i])
						min=matrica[i][i];
			}
		}
	printf("%d", min);
	return 0;
}
