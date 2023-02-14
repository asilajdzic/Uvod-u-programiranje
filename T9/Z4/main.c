#include <stdio.h>
char max_slovo(const char *s)
{
	int brojaci[25]= {0};
	int indeks=0,i;
	while(*s) {
		if(*s>='A' && *s<='Z')
			brojaci[*s-'A']++;
		else if(*s>='a' && *s<='z')
			brojaci[*s-'a']++;
		s++;
	}
	for(i=0; i<25; i++) {
			if(brojaci[indeks]<brojaci[i]) {
				indeks=i;
			}
		}
	return indeks+'A';
}
int main()
{
	printf("%c\n", max_slovo("CCCAAA"));
	return 0;
}
