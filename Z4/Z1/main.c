#include <stdio.h>
char* nadji_zbir(char* s)
{
	int predznak;
	char* adresa_prvog=NULL;
	char* adresa_drugog=NULL;
	char* adresa_treceg=NULL;
	double prvi_broj=0,drugi_broj=0,treci_broj=0;
	while(*s)
	{
		if(prvi_broj+drugi_broj-treci_broj<0.000001)
		{
			prvi_broj=drugi_broj;
			drugi_broj=treci_broj;
			treci_broj=0;
			adresa_prvog=adresa_drugog;
			adresa_drugog=adresa_treceg;
		}
		predznak=1;
		if(*s=='-')
		predznak=-1;
		if(*s>='0' && *s<='9')
		{
			adresa_treceg=s;
			while(*s>='0' && *s<='9')
			{
				treci_broj=treci_broj*10+*s-'0';
				s++;
			}
			treci_broj=treci_broj*predznak;
		}
		s++;
	}
	return adresa_prvog;
}
int main() {
	return 0;
}
