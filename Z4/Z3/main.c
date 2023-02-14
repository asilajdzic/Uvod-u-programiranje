#include <stdio.h>
#include <string.h>
char* whitespace(char* s)	{
	char* adresa=s;
	while(*s) {
		if(!((*s>='a' && *s<='z') || (*s>='A' && *s<='Z')))
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
void max_slog(char *string, char* ret)
{
	char matrica_slogova[100][100];
	char prepis[100];
	char* s=prepis;
	char* kraj;
	char* adresa_kraja;
	char* adresa=s;
	int i=0,j=0,k=0,ponavljanja,max_ponavljanja=0,broj_slogova=0;
	while(*s++=*string++);
	s=adresa; //prepisujemo
	while(*s) {
		if(*s>='A' && *s<='Z')
			*s+='a'-'A';
		s++;
	}	kraj=s;	s=adresa; // mala slova
	adresa_kraja=kraj;
	while(*s)	{
		if(*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u') {
			adresa_kraja++;
			while(kraj>=s) {
				*(kraj+1)=*kraj;
				kraj--;
			}
			s++;
			*s=' ';
			kraj=adresa_kraja;
		}
		s++;
	}	s=adresa; // rastavljamo na slogove
	whitespace(prepis);
	while(*s)	{
		if(*s==' ')
		broj_slogova++;
		s++;
	}	s=adresa;
	for(i=0; i<=strlen(prepis); i++)	{
		if(prepis[i]==' ' || prepis[i]=='\0') {
			matrica_slogova[k][j]='\0';
			k++;
			j=0;
		} else {
			matrica_slogova[k][j]=prepis[i];
			j++;
		}
	} //zapisemo u matricu
	for(i=0;i<broj_slogova;i++)	{
		ponavljanja=1;
		{
			for(j=i+1;j<=broj_slogova;j++)	{
				if(strcmp(matrica_slogova[i],matrica_slogova[j])==0)
				ponavljanja++;
				if(ponavljanja>max_ponavljanja)
				{
					max_ponavljanja=ponavljanja;
					strcpy(ret,matrica_slogova[i]);
				}
				if(ponavljanja==max_ponavljanja && strlen(matrica_slogova[i])>strlen(ret))
				{
					max_ponavljanja=ponavljanja;
					strcpy(ret,matrica_slogova[i]);
				}
			}
		}
	} 
	/*for(i=0; i<k+1; i++)
		printf("%s\n",matrica_slogova[i]);
	printf("%s",prepis);*/
}
int main()
{
	char slog[100];
	max_slog("Program koji samo broji samoglasnike nije tacniji", slog);
	printf("'%s'", slog);

	return 0;
}
