#include <stdio.h>

int main() {
	printf("Unesite koeficijente a, b i c: ");
	float a, b, c, d, x;
	scanf("%f%f%f", &a, &b, &c);
	if(a<10 && b<10 && c<10 && a>-10 && b>-10 && c>-10)
	{
			printf("Unesite tacku x: ");
			scanf("%f", &x);
			d=2*a*x+b;
			printf("Prva derivacija u tacki x=%g je %g.", x, d);
	}
	else printf("Koeficijenti a, b i c nisu u zadanom rasponu.");
	
	return 0;
}
