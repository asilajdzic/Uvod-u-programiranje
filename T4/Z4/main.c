#include <stdio.h>
int main()
{
	printf("Unesite mjesec: ");
	int m,g;
	scanf("%d",&m);
	printf("Unesite godinu: ");
	scanf("%d",&g);
	switch(m) {
	case 1:
		printf("Januar %d, broj dana: 31",g);
		break;
	case 2:
		printf("Februar %d",g);
		if(g%4==0)
			printf(", broj dana: 29");
		else
			printf(", broj dana: 28");
		break;
	case 3:
		printf("Mart %d, broj dana: 31",g);
		break;
	case 4:
		printf("April %d, broj dana: 30",g);
		break;
	case 5:
		printf("Maj %d, broj dana: 31",g);
		break;
	case 6:
		printf("Juni %d, broj dana: 30",g);
		break;
	case 7:
		printf("Juli %d, broj dana: 31",g);
		break;
	case 8:
		printf("Avgust %d, broj dana: 31",g);
		break;+
	case 9:
		printf("Septembar %d, broj dana: 30",g);
		break;
	case 10:
		printf("Oktobar %d, broj dana: 31",g);
		break;
	case 11:
		printf("Novembar %d, broj dana: 30",g);
		break;
	case 12:
		printf("Decembar %d, broj dana: 31",g);
		break;
	}
	return 0;
}
