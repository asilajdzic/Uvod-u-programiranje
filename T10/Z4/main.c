#include <stdio.h>
char* whitespace(char* s)
{
	char* adresa=s;
	while(*s) {
		if(*s=='\n' || *s=='\t')
			*s=' ';
		s++;
	}
	s=adresa;
	char *p = s;
	char *p2 = s;
	while(*p!='\0') {
		if(*p==' ')
			p++;
		else if(*p!=' ') {
			*p2 = *p;
			p2++;
			p++;
			if(*p==' ') {
				*p2=*p;
				p2++;
				p++;
			}
		}
	}
	if(*(p2-1)==' ')
	*(p2-1)='\0';
	*p2='\0';
	return adresa;
}
int main()
{
	printf("Tutorijal 10, Zadatak 4");
	return 0;
}
