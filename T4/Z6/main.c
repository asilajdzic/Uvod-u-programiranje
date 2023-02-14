#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a,b;
	printf("Izabrao sam broj. Probaj ga pogoditi (-1 za izlaz).\n");
	srand(time(0));
	b=rand()%100+1;
	do {
		printf("Unesite broj: ");
		scanf("%d",&a);
		if(a==-1) {
			printf("Kraj igre.");
			return 0;
		}
		if(a<b) {
			printf("VECI\n");
		} else if(a>b) {
			printf("MANJI\n");
		} else if(a==b) {
			printf("JEDNAK\n");
			printf("Kraj igre.");
			return 0;
		}
	} while(a!=-1);
	printf("Kraj igre.");
	return 0;
}
