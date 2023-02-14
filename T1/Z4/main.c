#include <stdio.h>
#define PI 3.14
int main() {
	float a, b, c, r, H, PK, VK, PC, VC, P, V;
	printf("Unesite sirinu kvadra : \n");
	scanf ("%f", &a);
	printf("Unesite duzinu kvadra : \n");
	scanf ("%f", &b);
	printf("Unesite visinu : \n");
	scanf ("%f", &c);
	printf("Unesite poluprecnik valjka : \n");
	scanf ("%f", &r);
	printf("Unesite visinu valjka : \n");
	scanf ("%f", &H);
	PK=2*(a*b+a*c+b*c);
	VK=a*b*c;
	PC=2*r*PI*(r+H);
	VC=r*r*PI*H;
	P=PK+PC-2*r*r*PI;
	V=VK+VC;
	printf("\n Povrsina tijela je %.2f cm2", P);
	printf("\n Zapremina tijela je %.2f cm3", V);
	return 0;
}
