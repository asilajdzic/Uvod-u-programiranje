#include <stdio.h>
#include <math.h>
int main() {
	double a,b,x,h,suma=0,stepsuma=0;
	int n,i,j;
	do{
	printf("Unesite prvu tacku intervala: ");
	scanf("%lf",&a);
	printf("Unesite drugu tacku intervala: ");
	scanf("%lf",&b);
	}
	while(b-a>100);
	printf("Unesite korak diskretizacije: ");
	scanf("%lf",&h);
	for(i=a;i<b;i=i+h){
		
	}
	printf("%lf,%lf", suma,stepsuma);
	return 0;
}
