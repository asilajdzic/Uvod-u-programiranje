#include <stdio.h>
int main() {
	int A[10],B[10],C[20],i,ab,bc;
	printf("Unesite elemente niza A: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]==-1)
		break;
	}
	ab=i;
	printf("Unesite elemente niza B: ");
	for(i=0;i<10;i++)
	{
		scanf("%d ",&B[i]);
		if(B[i]==-1)
		break;
	}
	bc=i;
	for(i=0;i<ab;i++)
	{
		C[i]=A[i];
	}
	for(i=0;i<bc;i++)
	{
		C[ab+i]=B[i];
	}
	printf("Niz C glasi: ");
	for(i=0;i<ab+bc-1;i++)
	{
		printf("%d,",C[i]);
	}
	printf("%d",C[ab+bc-1]);
	return 0;
}
