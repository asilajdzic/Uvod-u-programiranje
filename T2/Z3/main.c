#include <stdio.h>

int main() {
	int D, M;
	printf("Dan: ");
	scanf("%d", &D);
	printf("Mjesec: ");
	scanf("%d", &M);
	
		if(M==1 && D<=19)
		printf("Vas znak je Jarac!");
	else if(M==1)
		printf("Vas znak je Vodolija!");
		
		else if(M==2 && D<=18)
		printf("Vas znak je Vodolija!");
	else if(M==2)
		printf("Vas znak je Ribe!");
		
		else if(M==3 && D<=19)
		printf("Vas znak je Ribe!");
	else if(M==3)
		printf("Vas znak je Ovan!");
		
		else if(M==4 && D<=20)
		printf("Vas znak je Ovan!");
	else if(M==4)
		printf("Vas znak je Bik!");
		
		else if(M==5 && D<=20)
		printf("Vas znak je Bik!");
	else if(M==5)
		printf("Vas znak je Blizanci!");
		
		else if(M==6 && D<=22)
		printf("Vas znak je Blizanci!");
	else if(M==6)
		printf("Vas znak je Rak!");
		
		else if(M==7 && D<=22)
		printf("Vas znak je Rak!");
	else if(M==7)
		printf("Vas znak je Lav!");
		
		else if(M==8 && D<=22)
		printf("Vas znak je Lav!");
	else if(M==8)
		printf("Vas znak je Djevica!");
		
		else if(M==9 && D<=21)
		printf("Vas znak je Djevica!");
	else if(M==9)
		printf("Vas znak je Vaga!");
		
		else if(M==10 && D<=22)
		printf("Vas znak je Vaga!");
	else if(M==10)
		printf("Vas znak je Skorpija!");
		
		else if(M==11 && D<=21)
		printf("Vas znak je Skorpija!");
	else if(M==11)
		printf("Vas znak je Strijelac!");
		
		else if(M==12 && D<=21)
		printf("Vas znak je Strijelac!");
	else if(M==12)
		printf("Vas znak je Jarac!");
	return 0;
}
