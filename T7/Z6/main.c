#include <stdio.h>
int pascal (int x, int y)	{
	int P;
	if(x==0 || y==1)	{
	P=1;
	return P;
	}
	else if (x+1>y && y>0)	{
		P=pascal(x-1,y)+pascal(x-1,y-1);
		return P;
	}
	return 0;
}
int main() {
	printf("Unesite n: ");
	int n,i,j,P;
	scanf("%d",&n);
	for(i=0;i<=n;i++)	{
		for(j=1;j<=n;j++)	{
			P=pascal(i,j);
			if(P>0 && i>0)
			printf("%-4d",P);
		}
		printf("\n");
	}
	return 0;
}
