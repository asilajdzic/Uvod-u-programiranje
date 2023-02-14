#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, x1, x2, x1Re, x1Im, x2Im, t=0, D;
	printf("\n Unesite koeficijente kvadratne jednadzbe a,b,c:\n");
	scanf("%lf %lf %lf", &a,&b,&c);
	D=(b*b)-((4.0)*a*c);
	if(D>0)
		{
			t=sqrt(D);
			x1=(-b+t)/(2*a);
			x2=(-b-t)/(2*a);
			printf(" Rjesenja su: x1=%f   x2=%f\n",x1,x2);
		}
	else if(D<0)
		{
			t=sqrt(-D);
			x1Re=(-b)/(2*a);
			x1Im=t/(2*a);
			x2Im=-x1Im;
			printf(" Rjesenja su: x1 = (%f,%f)\n",x1Re,x1Im);
			printf(" x2 = (%f,%f)\n",x1Re,x2Im);
		}
	else 
		{
			x1=(-b)/(2*a);
			printf(" Rjesenja su: x1=x2=%f\n",x1);
		}
	return 0;
}
