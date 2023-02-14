#include <stdio.h>
float maxtemp(float p[],int broj)	{
	float max;
	int i;
	max=p[0];
	for(i=1;i<broj;i++)	{
		if(max<p[i])
		max=p[i];
	}
	return max;
}
float prtemp(float p[],int broj)	{
	int i;
	float suma=0,prosjek;
	for(i=0;i<broj;i++)	{
		suma=suma+p[i];
	}
	prosjek=suma/broj;
	return prosjek;
}
int main() {
	int i,n;
	float max,prosjek,niz[1000]={0};
	printf("Unesite broj mjerenja: ");
	scanf("%d",&n);
	printf("Unesite temperature: ");
	for(i=0;i<n;i++)	{
		scanf("%f",&niz[i]);
	}
	max=maxtemp(niz,n);
	prosjek=prtemp(niz,n);
	printf("Maksimalna temperatura: %.1f\n",max);
	printf("Prosjecna temperatura: %.1f\n",prosjek);
	return 0;
	
}
