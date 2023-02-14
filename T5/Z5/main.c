#include <stdio.h>

int main() {
	printf("Unesite brojeve: \n");
	int niz[1000],brojaci[1001]={0},n,i;
	for(i=0;;i++)
		{
			scanf("%d",&niz[i]);
			if(niz[i]==-1)
				 break;
			if(niz[i]<0 || niz[i]>100)
				{
					printf("Brojevi moraju biti izmedju 0 i 100!\n");
					i--;
				}
		}
	n=i;
	for(i=0;i<n;i++)
		{
			brojaci[niz[i]]++;
		}
	for(i=0;i<101;i++)
		{
			if(brojaci[i]>0)
			printf("Broj %d se javlja %d puta.\n",i,brojaci[i]);
		}
	return 0;
}
