#include <stdio.h>

int main() {
	printf("Unesite brojeve: \n");
	int broj,d5=0,d7=0,d11=0;
	do
	{
		scanf("%d",&broj);
		if(broj%5==0)
		d5++;
		if(broj%7==0)
		d7++;
		if(broj%11==0)
		d11++;
	}
	while(broj!=-1);
	printf("Djeljivih sa 5: %d\n",d5);
	printf("Djeljivih sa 7: %d\n",d7);
	printf("Djeljivih sa 11: %d",d11);
	
		
	return 0;
}
