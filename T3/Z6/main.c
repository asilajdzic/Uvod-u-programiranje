#include <stdio.h>
int main() {
	printf("Unesite broj: ");
	int n;
	int i,s=0;
	scanf("%d",&n);
	if(n<=0)
		{
			printf("Broj nije prirodan.");
		}
	else if(n==1)
		{
			printf("Broj nije ni prost ni slozen.");
		}
	else
	{
		for(i=1;i<n;i++)
			if(n%i==0)
				{
				s+=1;
				}
		if(s==1)
			printf("Broj je prost.");
		else
			printf("Broj je slozen.");
			
	}
	return 0;
}
