#include <stdio.h>

int main() {
	double suma=0,matrica[100][100];
	int i,j,a,b;
	printf("Unesite dimenzije matrice: ");
	scanf("%d %d",&a,&b);
	printf("Unesite elemente matrice: ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++)	{
			scanf("%lf", &matrica[i][j]);
			if(i==0 || j==0 || i==a-1 || j==b-1)
			suma=suma+matrica[i][j];
		}
	}
	printf("Suma elemenata na rubu je %.2lf",suma);
}