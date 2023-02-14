#include <stdio.h>
#include <math.h>
int main()
{
	float A[5],B[5],C[5];
	int i;
	printf("Unesite clanove niza A: ");
	for(i=0; i<5; i++) {
		scanf("%f",&A[i]);
	}
	printf("Unesite clanove niza B: ");
	for(i=0; i<5; i++) {
		scanf("%f",&B[i]);
	}
	for(i=0; i<5; i++) {
		C[i]=2*A[i]+B[i];
	}
	printf("Niz A glasi: ");
	for(i=0; i<5; i++) {
		A[i]=round(A[i]*100)/100;
		if(i<4) {
			printf("%.2f, ",A[i]);
		} else if(i==4) {
			printf("%.2f",A[i]);
		}
	}
	printf("\nNiz B glasi: ");
	for(i=0; i<5; i++) {
		B[i]=round(B[i]*100)/100;
		if(i<4) {
			printf("%.2f, ",B[i]);
		} else if(i==4) {
			printf("%.2f",B[i]);
		}
	}
	printf("\nNiz C glasi: ");
	for(i=0; i<5; i++) {
		C[i]=round(C[i]*100)/100;
		if(i<4) {
			printf("%.2f, ",C[i]);
		} else if(i==4) {
			printf("%.2f",C[i]);
		}
	}
	return 0;
}
