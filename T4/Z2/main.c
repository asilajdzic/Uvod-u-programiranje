#include <stdio.h>
int main(){
	printf("Unesite stranice pravougaonika a,b: ");
	int a,b,i,j;
	scanf("%d,%d",&b,&a);
	for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				if((i==0 && j==0) || (i==0 && j==b-1) || (i==a-1 && j==0) || (i==a-1 && j==b-1))
					{
						printf("+");
					}
				else if(i==0 || i==a-1)
					{
						printf("-");
					}
				else if(j==0 || j==b-1)
					{
						printf("|");
					}
				else
					{
						printf(" ");
					}
			}
			printf("\n");
		}
	return 0;
	}
