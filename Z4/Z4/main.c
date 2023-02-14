#include <stdio.h>
#include <math.h>
char* izracunaj(char *s,int *ok)
{
	char* adresa=s;
	char* vratiti_do;
	char* poc;
	char* kraj;
	char* operand;
	int prvi_broj=0,drugi_broj=0,rezultat=0;
	*ok=1;
	/*while(*s)
	{
		if(*s=='^')
		{
			operand=s;
			poc=s-1;
			while(*poc>='0' && *poc<='9')
			{
			poc--;
			vratiti_do--;
			}
			while(*poc>='0' && *poc<='9')
			{
				prvi_broj=prvi_broj*10+*poc-'0';
				poc++;
			}
			poc=operand;
			while(*poc>='0' && *poc<='9')
			{
				drugi_broj=drugi_broj*10+*poc-'0';
				poc++;
			}
			rezultat=pow(prvi_broj,drugi_broj);
			s=adresa;
			
		}
		s++;
	}*/
	while(*s)
	{
		if(*s=='^')
		{
			operand=s;
			poc=s-1;
			kraj=s;
			while(*poc>='0' && *poc<='9') //izdvojimo prvi broj
			{
				poc--;
				vratiti_do--;
			}
			while(poc<kraj) // pretvorimo prvi broj u int
			{
				prvi_broj=prvi_broj*10+*poc-'0';
				poc++;
			}
			poc=s;
			kraj=s+1;
			while(*kraj>='0' && *kraj<='9') kraj++; //izdvojimo drugi broj
			while(poc<kraj) // pretvorimo prvi broj u int
			{
				drugi_broj=drugi_broj*10+*poc-'0';
				poc++;
			}
			rezultat=pow(prvi_broj,drugi_broj);
		}
		s++;
	}
	return rezultat;
}
int main() {
int ok1, ok2, ok3, ok4;
int x = izracunaj ("2^2", &ok1);
int y = izracunaj ("2-2", &ok2);
int z = izracunaj ("-2+2", &ok3);
int r = izracunaj ("-2-2", &ok4);
printf ("%i %i %i %i\n", x, y, z, r);
printf ("%i %i %i %i", ok1, ok2, ok3, ok4);
	return 0;
}
