#include <stdio.h>
#include <math.h>

double f(double x)
{
	return 2*x+2;
}
double g(double x)
{
	return 4*x-2;
}
double h(double x)
{
	return f(x) - g(x);
}
// sjesku se status 0, vraca se x , epsilon 0.0001
// ne sjeku se status 1, vraca se 0
// identicne status 2, vraca se 0
double presjek(double A, double B, int* status)
{
	double delta = 0.01;
	double epsilon=0.0001;
	
	
	double dh = (A+B)/2;
	double x;
	*status = 1;
	while(fabs ((B-A)-delta)>epsilon) {
		if(fabs(h(A))<epsilon && fabs(h(B))<epsilon && fabs(h(dh))<epsilon) {
			*status =2;
			return 0;
		} else if(fabs(h(A))<epsilon) {
			*status =0;
			return A;
		} else if(fabs(h(B))<epsilon) {
			*status =0;
			return B;

		} else if(fabs(h(dh))<epsilon) {
			*status = 0;
			return dh;
		}
		if( h(A)> 0 && h(dh) < 0 || h(A)<0 && h(dh)>0) {
			B = dh;
		} else if(h(B)> 0 && h(dh)< 0 || h(B)<0 && h(dh)>0) {
			A = dh;
		} else  if (B-A>delta) {
			x =presjek(A,dh,status);
			if(!(*status))
				return x;
			x = presjek(dh,B,status);
			if(!(*status))
				return x;
			*status = 1;
			return 0;
		} else
			return 0;
			
		dh = (A+B)/2;
	}
	*status =1;
	return 0;
}

int main()
{
	
	int status;
	double x,donja,gornja;
	printf("f(x) = x*x, g(x) = x \n");
	printf("Unesite donju granicu intervala: ");
	scanf("%lf",&donja);
	printf("Unesite gornju granicu intervala:");
	scanf("%lf",&gornja);
	x=presjek(donja,gornja,&status);
	switch(status) {
	case 0:
		printf("Funkcije se sijeku, x = %.3f",x);
		break;
	case 1:
		printf("Funkcije se ne sijeku.");
		break;
	case 2:
		printf("Funkcije su identicne.");
	}
	return 0;
}
