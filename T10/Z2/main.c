#include <stdio.h>
char* rot13(char* s)
{
	char* adresa=s;
	while(*s)
	{
		if((*s>='a' && *s<='m') || (*s>='A' && *s<='M'))
		*s+=13;
		else if((*s>='n' && *s<='z') || (*s>='N' && *s<='Z'))
		*s-=13;
		s++;
	}
	return adresa;
}
int main() {
	char testni_string[] = "Moje ime je medvjedic Lino";
	printf("%s\n", rot13(testni_string));
	printf("%s", rot13(testni_string));
	return 0;
}