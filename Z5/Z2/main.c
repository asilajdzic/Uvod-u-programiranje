#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Planina {
	char naziv[51];
	int visina;
};
int trazi_broj (const char* s)		{
	int broj=0;
	while(*s)
	{
		if(*s>='0' && *s<='9')
		{
			while(*s>='0' && *s<='9')	{
				broj=broj*10+*s-'0';
				s++;
			}
			s--;
		}
		s++;
	}
	return broj;
}
int ima_A (char *s)	{
	while(*s)
	{
		if(*s=='a' || *s=='A')
		return 1;
		s++;
	}
	return 0;
}
int ucitaj(struct Planina planine[],int vel)
{
	char string[100],c;
	int i=0,j;
	FILE* ulaz;
	char *s;
	char* adresa=string;
	if ((ulaz = fopen("planine.txt","r")) == NULL) {
		printf("Greska");
		exit(1);
	}
	c=fgetc(ulaz);
	fseek(ulaz,0,SEEK_SET);
	while(fgets(string,100,ulaz))
	{
		s=adresa;
		j=0;
		planine[i].visina=trazi_broj(string);
		if(c>='0' && c<='9')
		{
			while(*s && !(*s>='a' && *s<='z' || *s>='A' && *s<='Z'))
			s++;
			while(*s!='\n')
			{
				planine[i].naziv[j]=*s;
				s++;
				j++;
			}
			planine[i].naziv[j]='\0';
		}
		else	{
			while(*s && !(*s>='0' && *s<='9'))
			s++;
			s--;
			*s='\0';
			strcpy(planine[i].naziv,adresa);
		}
		i++;
	}
	return i;
}
void zapisi(struct Planina planine[],int vel)
{
	FILE* izlaz;
	if ((izlaz = fopen("planine.dat","wb")) == NULL) {
		printf("Greska");
		exit(1);
	}
	fwrite(planine,sizeof(struct Planina),vel,izlaz);
	fclose(izlaz);
}
void ispis(struct Planina planine[],int vel)
{
	int i,max=0;
	for(i=0;i<vel;i++)
	{
		if(planine[i].visina < 2000 && ima_A(planine[i].naziv))
		max=i;
	}
	for(i=0;i<vel;i++)
		{
			if(planine[i].visina<2000 && planine[i].visina>planine[max].visina) 
			{
				if(ima_A(planine[i].naziv))
				max=i;
			}
		}
		printf("%s %d\n",planine[max].naziv,planine[max].visina);
}
int main()
{
	struct Planina planine [10],planineBin[10];
	int i,vel;
	ucitaj(planine,10);
	for(i=0; i<3; i++)
		printf("%s  %d \n",planine[i].naziv,planine[i].visina);
	zapisi(planine,3);
	FILE* fp = fopen("planine.dat", "rb");
	vel = fread(planineBin, sizeof(struct Planina), 3, fp);
	fclose(fp);
	for (i=0; i<vel; i++) {
		printf("%s - %d\n", planineBin[i].naziv, planineBin[i].visina);
	}
	ispis(planine,3);
	return 0;
}
