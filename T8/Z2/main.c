#include <stdio.h>
float maxtemp(float p[8])	{
	float max;
	int i;
	max=p[0];
	for(i=1;i<8;i++)	{
		if(max<p[i])
		max=p[i];
	}
	return max;
}
float prtemp(float p[8])	{
	int i;
	float suma=0,prosjek;
	for(i=0;i<8;i++)	{
		suma=suma+p[i];
	}
	prosjek=suma/8;
	return prosjek;
}
int main() {
	int i;
	float max,prosjek,niz[8];
	printf("Unesite temperature: ");
	for(i=0;i<8;i++)	{
		scanf("%f",&niz[i]);
	}
	max=maxtemp(niz);
	prosjek=prtemp(niz);
	printf("Maksimalna temperatura: %.1f\n",max);
	printf("Prosjecna temperatura: %.1f\n",prosjek);
	return 0;
	
}
