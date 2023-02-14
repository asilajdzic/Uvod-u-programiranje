#include <stdio.h>
char* izbaci_rijec(char* s, int n)
{
	char *pocetak=s;
	int brojac=0;
	if(n<1)	return pocetak;
	while(*s)
	{
		if(s==pocetak && (*s>='A' && *s<='Z' || *s>='a' && *s<='z')) brojac++;
		if(s!=pocetak && (*s>='A' && *s<='Z' || *s>='a' && *s<='z') &&
		!(*(s-1)>='A' && *(s-1)<='Z' || *(s-1)>='a' && *(s-1)<='z')) brojac++;
		if(brojac==n)
		{
			char* kraj=s;
			while(*kraj && (*kraj>='A' && *kraj<='Z' || *kraj>='a' && *kraj<='z')) kraj++;
			while(*kraj)
			{
				*s=*kraj;
				s++;
				kraj++;
			}
			*s='\0';
		}
		s++;
	}
	return pocetak;
}
int main()
{
	printf("Tutorijal 10, Zadatak 3");
	return 0;
}
