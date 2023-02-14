#include <stdio.h>
void unesi(char niz[], int velicina) {
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
char* kapitaliziraj(char *s)	{
	int treba=1,brojac=0;
	while (*s)	
	{
		if(treba==1 && *s>='a' && *s<='z')
		*s-='a'-'A';
		if(*s!=' ')
		treba=0;
		else treba=1;
		s++;
		brojac++;
	}
	return s-brojac;
}
int main() {
	char A[100];
	printf("Unesite neki tekst: ");
	unesi (A,100);
	kapitaliziraj(A);
	printf("%s",kapitaliziraj(A));

	return 0;
}
