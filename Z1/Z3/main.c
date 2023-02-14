#include <stdio.h>

int main() {
	char slovo;
	int broj=1,sabit=0,fadila=0,k=0,l=0;
	printf("Unesite pogotke za Sabita: ");
	do
		{
		scanf(" %c",&slovo);
		k++;
		if(slovo=='T')
			{
				scanf(" %d",&broj);
				sabit=sabit+3*broj;
			}
		else if(slovo=='D')
			{
				scanf(" %d",&broj);
				sabit=sabit+2*broj;
			}
		else if(slovo=='S')
			{
				scanf(" %d",&broj);
				sabit=sabit+broj;
			}
		else if(slovo=='I')
			{
				sabit=sabit+50;
			}
		else if(slovo=='O')
			{
				sabit=sabit+25;
			}
		else if(slovo=='X')
			{
				sabit=sabit;
			}
		else if((slovo!='X' && slovo!='O' && slovo!='I' && slovo!='S' && slovo!='D' && slovo!='T' && slovo!='.') || k>11 || broj<1|| broj>10)
			{
				printf("Neispravni ulazni podaci.\n");
				sabit=0;
				k=0;
				printf("Unesite pogotke za Sabita: ");
			}
		}
	while(slovo!='.' || k<10);
	
	printf("Unesite pogotke za Fadilu: ");
	do
		{
		scanf(" %c",&slovo);
		l++;
		if(slovo=='T')
			{
				scanf("%d",&broj);
				fadila=fadila+3*broj;
			}
		else if(slovo=='D')
			{
				scanf(" %d",&broj);
				fadila=fadila+2*broj;
			}
		else if(slovo=='S')
			{
				scanf(" %d",&broj);
				fadila=fadila+broj;
			}
		else if(slovo=='I')
			{
				fadila=fadila+50;
			}
		else if(slovo=='O')
			{
				fadila=fadila+25;
			}
		else if(slovo=='X')
			{
				fadila=fadila;
			}
		else if((slovo!='X' && slovo!='O' && slovo!='I' && slovo!='S' && slovo!='D' && slovo!='T' && slovo!='.') || l>11 || broj<1|| broj>10)
			{
				printf("Neispravni ulazni podaci.\n");
				fadila=0;
				l=0;
				printf("Unesite pogotke za Fadilu: ");
			}
		}
	while(slovo!='.' || l<10);
	if(sabit<=301 && fadila<=301 && fadila!=sabit)
		{
			printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. ",sabit,fadila);
			if(301-sabit<301-fadila)
				{
					printf("Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.",301-sabit);
				}
			else 
				{
					printf("Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.",301-fadila);
				}
		}
	else if(sabit==fadila && sabit<=301 && fadila<=301)
		{
			printf("Sabit je ostvario %d poena, Fadila je ostvarila %d poena. ",sabit,fadila);
			printf("Rezultat je nerijesen.");
		}
	else if(sabit>301 && fadila>301)
		{
			printf("Oba igraca su premasila potrebni broj poena, rezultat je nerijesen. ");
		}
	else if(sabit>301 && fadila<=301)
		{
			printf("Sabit je premasio potrebni broj poena, Fadila je ostvarila %d poena. ",fadila);
			printf("Pobjednik je Fadila, kojoj je ostalo jos %d poena do pobjede.",301-fadila);
		}
	else if(sabit<=301 && fadila>301)
		{
			printf("Fadila je premasila potrebni broj poena, Sabit je ostvario %d poena. ",sabit);
			printf("Pobjednik je Sabit, kojem je ostalo jos %d poena do pobjede.",301-sabit);
		}
	return 0;
}