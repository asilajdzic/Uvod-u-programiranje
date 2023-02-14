#include <stdio.h>
char* tritacke(char *s)
{
	char* adresa=s;
	char* kraj;
	char* pocetak;
	int brojacslova=0;
	while(*s)
	{
		if(*s>='a' && *s<='z' || *s>='A' && *s<='Z')
		{
			pocetak=s;
			kraj=s;
			while(*kraj && *kraj!=' ')
			{
				kraj++;
				brojacslova++;
			}
			if(brojacslova>=10)
			{
				pocetak+=3;
				*pocetak='.';
				pocetak++;
				while(*pocetak++=*kraj++);
			}
			brojacslova=0;
		}
		s++;
	}
	return adresa;
}
int main() {
	printf("Tutorijal 10, Zadatak 6");
	return 0;
}
