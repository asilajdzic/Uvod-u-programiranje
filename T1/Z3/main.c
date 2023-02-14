#include <stdio.h>
#include <math.h>
int main() {
	float x, y, z, p, q, r, R;
	printf("Unesite koordinate prve tacke: \n");
	scanf ("%f", &x);
	scanf ("%f", &y);
	scanf ("%f", &z);
	printf("Unesite koordinate druge tacke: \n ");
	scanf ("%f", &p);
	scanf ("%f", &q);
	scanf ("%f", &r);
	R=sqrt((p-x)*(p-x)+(q-y)*(q-y)+(r-z)*(r-z));
	printf("Udaljenost izmedu te dvije tacke je = %.2f", R);
	
	return 0;
}

