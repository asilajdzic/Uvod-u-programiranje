#include <stdio.h>

int main() {
	int n, i, j;
	printf("Unesite broj n: ");
	scanf("%d", &n);
		for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
			{
					printf("* ");
					
			}
			printf("\n");
			if(i%2==0 || i==2)
					{
						printf(" ");
					}
			}
	return 0;
}
