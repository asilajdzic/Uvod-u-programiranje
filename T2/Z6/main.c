#include <stdio.h>

int main() {
	printf("Unesite brojeve a,b,c,d: ");
	float a,b,c,d;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if(b<c || d<a)
		printf("Skupovi se ne sijeku.");
	else if(a<c && d<b)
		printf("Rezultantni interval je [%g,%g].",c,d); 
	else if(c<a && b<d)
		printf("Rezultantni interval je [%g,%g].",a,b);
	else if(c<a && d<b)
		printf("Rezultantni interval je [%g,%g].",a,d);
	else if(a<c && b<d)
		printf("Rezultantni interval je [%g,%g].",c,b);
	return 0;
}
