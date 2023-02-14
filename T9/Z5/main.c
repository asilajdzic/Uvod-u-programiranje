#include <stdio.h>
int prva_rijec(char *s)
{
	int brojac=0,vratitiza=0,razmak=1;
	while(*s)
	{
	if(*s==' ')
	razmak=1;
	else if(razmak){
		razmak=0;
		brojac++;
	}
	vratitiza++;
	s++;
	}
	s=s-vratitiza;
	while(*s)
	{
		if(*s!=' ' && *(s+1)==' ')
		*(s+1)=0;
		s++;
	}
	return brojac;
}
int main() {
	printf("Tutorijal 9, Zadatak 5");
	return 0;
}
