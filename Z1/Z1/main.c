#include <stdio.h>

int main() {
	printf("Unesite broj n: \n");
	int n, i, j;
	scanf("%d",&n);
	if(n%2==1 || n<4 || n>100)
		{printf("Broj je van trazenog opsega.");}
	else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<=2*n-1;j++)
				{
					if((i==0 || i==n-1) || (j==0 || j==2*n-1) || (i==j && i<(n-1)/2) || (i==n/2-1 && j>(n-2)/2-1 && j<3*n/2+1) || (i+j==2*n-1 && i<(n-1)/2))
					{
						printf("+");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n");
			}
		}
	return 0;
}
