#include <stdio.h>
#include <math.h>
long long faktorijel (int broj)
{
	double i,fakt=1;
	for(i=1;i<=broj;i++)	{
		fakt=fakt*i;
	}
	return fakt;
}
double sinus (double x, int n)		{
	double sinx=0;
	int i;
	for(i=1;i<=n;i++)	{
		sinx+=pow(-1,i-1)*pow(x,2*i-1)/faktorijel(2*i-1);
	}
	return sinx;
}
int main() {
	double x;
	int n;
	printf("Unesite x: \n");
	scanf("%lf",&x);
	printf("Unesite n: \n");
	scanf("%d",&n);
	printf("sin(x)=%lf\n",sin(x));
	printf("sinus(x)=%lf\n",sinus(x,n));
	printf("Razlika: %lf (%.2lf%%).",fabs(sin(x)-sinus(x,n)),fabs((sin(x)-sinus(x,n)))/sin(x)*100);
	return 0;
}
