#include <stdio.h>
#include <math.h>
static int eksponent,ponavljanje=1,treba;
static double broj;
double stepen(double x)	
{
	int i;
	if(treba==0)
	{
	if(fabs(broj-x)<0.000001)	
	ponavljanje++;
	else 
	ponavljanje=1;
	broj=x;
	for(i=1;i<ponavljanje;i++)
	x=broj*x;
	}
	else 
	{
		broj=x;
		for(i=1;i<eksponent;i++)
		{
			x=broj*x;
		}
	}
	treba=0;
	return x;
}
void stepenuj_niz(double A[], int s[], int duzina)
{
	int i;
	for(i=0;i<duzina;i++)	{

		eksponent=*s;
		treba=1;
		*A=stepen(*A);
		s++;
		A++;
	}
}
int main()
{
	double A[] = { 5, 2, 3, 4, 6.5 };
	int s[] = {5, 7, 0, 1, 2};
	stepenuj_niz(A, s, 5);
	int i;
	for (i=0; i<5; i++)
    printf("%g \n", A[i]);

	printf("%g ", stepen(2));
	printf("%g ", stepen(2));
	printf("%g ", stepen(2));
	printf("%g ", stepen(3));
	printf("%g ", stepen(3));
	printf("%g ", stepen(2));
	return 0;
}
