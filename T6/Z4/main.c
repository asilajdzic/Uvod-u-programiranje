#include <stdio.h>
int main() {
	printf("Unesite elemente niza: ");
	int niz[10],i,x,n,j;
	for(i=0;i<10;i++)
		{
			scanf("%d", &niz[i]);
			if(niz[i]==-1)
			break;
		}
	n=i;
	printf("Unesite element koji treba izbaciti: ");
	scanf("%d", &x);
	for(i=0;i<n;i++)
		{
			if(niz[i]==x)
				{	for(j=i+1;j<n;j++)
					{
						niz[j-1]=niz[j];
					}
				n--;
				i--;
				}
		}
	printf("Novi niz glasi: ");
	if(n==0)
	return 0;
	for(i=0;i<n-1;i++)
		{
			printf("%d,",niz[i]);
		}
		if(i=n-1)
			printf("%d",niz[i]);
	return 0;
}
