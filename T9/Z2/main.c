#include <stdio.h>
int samoglasnici(char *s)
{
	int broj = 0;
	while (*s != '\0') {
		if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' || *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
			broj++;
		s++;

	}
	return broj;
}
void unesi(char niz[], int velicina)
{
	char znak = getchar();
	if (znak == '\n') znak=getchar();
	int i = 0;
	while (i < velicina-1 && znak != '\n') {
		niz[i] = znak;
		i++;
		znak = getchar();
	}
	niz[i]='\0';
}
int prebroji(char* s, char znak)
{
	int broj = 0;
	while (*s != '\0') {
		if (*s == znak)
			broj++;
		s++;
	}
	return broj;
}
int main()
{
	char a[80],c;
	printf ("\nUnesite jednu rijec do 80 znakova (ENTER za kraj): ");
	unesi(a, 80);
	printf ("\nKoji znak treba prebrojati: ");
	scanf ("%c", &c);
	printf ("\nBroj znakova %c je: %d",c,prebroji(a,c));
	printf("\nBroj samoglasnika je: %d", samoglasnici(a));
	return 0;
}
