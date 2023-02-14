#include <stdio.h>
char* izbaci_anagrame(char* s1, char* s2)
{
	char* adresa_prvog=s1;
	char *kraj;
	char* pocetak;
	int histogram_prvog[26]={0};
	int histogram_drugog[26]={0};
	int anagram=0,i;
	while(*s2)
	{
		if(*s2==' ')
		s2++;
		if(*s2>='a' && *s2<='z' || *s2>='A' && *s2<='Z')
		{
			kraj=s2;
			while(*s2!=' ' && *s2!='\0')
				s2++;
			while(kraj<=s2)
			{
				if(*kraj>='a' && *kraj<='z')
				histogram_drugog[*kraj-'a']++;
				else if(*kraj>='A' && *kraj<='Z')
				histogram_drugog[*kraj-'A']++;
				kraj++;
			}
			while(*s1)
			{
				if(*s1==' ')
				s1++;
				if(*s1>='a' && *s1<='z' || *s1>='A' && *s1<='Z')
				{
						kraj=s1;
						pocetak=s1;
					while(*s1!=' ' && *s1!='\0')
						s1++;
					while(kraj<s1)
					{
						if(*kraj>='a' && *kraj<='z')
						histogram_prvog[*kraj-'a']++;
						else if(*kraj>='A' && *kraj<='Z')
						histogram_prvog[*kraj-'A']++;
						kraj++;
					}
					anagram=1;
				}
				for(i=0;i<26;i++)
				{
					if(histogram_prvog[i]!=histogram_drugog[i])
					anagram=0;
					histogram_prvog[i]=0;
				}
				if(anagram==0)
				continue;
				else if(anagram)
				{
					while(*pocetak++=*s1++);
					s1=adresa_prvog;
				}
			}
		}
	for(i=0;i<26;i++)
	histogram_drugog[i]=0;
	s1=adresa_prvog;
	}
return adresa_prvog;
}
int main() {
char tekst[] = "Vatra vata vraTa tava Vrat VARTA";
printf("'%s'", izbaci_anagrame(tekst, "trava"));
	return 0;
}
