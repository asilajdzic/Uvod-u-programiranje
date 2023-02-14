#include <stdio.h>
#include <math.h>
#define epsilon 0.0001
#define delta 0.01
static int status;
double f(double x)
{
	return x+1;
}
double g(double x)
{
	return x*x;
}
int h(double x)
{
	if(x>0)
		return 1;
	return 0;
}
double presjek(double A, double B, int* status)
{
	*status=1;
	double H=(A+B)/2;
	if(fabs(f(A)-g(A))<epsilon && fabs(f(B)-g(B))<epsilon && fabs(f(H)-g(H))<epsilon)
	{
		*status=2;
		return 0;
	}
	else if(fabs(f(A)-g(A))<epsilon) {
		*status=0;
		return A;
	} else if(fabs(f(H)-g(H))<epsilon) {
		*status=0;
		return H;
	} else if(fabs(f(B)-g(B))<epsilon) {
		*status=0;
		return B;
	}
	return 0; 
}
int main()
{
	double A=-5,B=5;
	printf("%g , %d",presjek(A,B,&status),status);
	return 0;
}
