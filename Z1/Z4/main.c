#include <stdio.h>
#include <math.h>
int main() {
	char spol,M,Z;
	int opcija,KCal,sedmica;
	float v,o,t,smanjiti,BMI,RFM,nBMI;
	M='m';
	Z='z';
	
		printf("\nUnesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
		scanf(" %c %f %f %f",&spol,&v,&o,&t);
		
	while(!(spol==M || spol==Z))
	{	
		printf("\nGreska u unosu za spol.");
		printf("\nUnesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
		scanf(" %c %f %f %f",&spol,&v,&o,&t);
	}
	while(v<100 || v>220 || o<40 || o>200 || t>200 || t<=0)
	{
		printf("\nGreska u unosu atributa.");
		printf("\nUnesite spol (mM/zZ), visinu (u cm), obim struka (u cm), tezinu (u kg): ");
		scanf(" %c %f %f %f",&spol,&v,&o,&t);
	}
	if(spol=='z')
	{RFM=76-(20*v/o);}
	if(spol=='m')
	{RFM=64-(20*v/o);}
	BMI=t/(v*v/10000);
	printf("Odaberite zeljenu opciju za trening: \n");
	printf("[1] Joga\n[2] Joga PLUS\n[3] Cardio\n[4] Super cardio\n[5] Total Body\n[6] Body Builder\n");
	scanf("%d",&opcija);
	switch(opcija)
		{
			case 1 : KCal=200;break;
			case 2 : KCal=300;break;
			case 3 : KCal=400;break;
			case 4 : KCal=500;break;
			case 5 : KCal=600;break;
			case 6 : KCal=600;break;
		}
	while(opcija!=1 && opcija!=2 && opcija!=3 && opcija!=4 && opcija!=5 && opcija!=6){
	printf(">> Greska u odabiru opcija.\n");
	printf("Odaberite zeljenu opciju za trening: \n");
	printf("[1] Joga\n[2] Joga PLUS\n[3] Cardio\n[4] Super cardio\n[5] Total Body\n[6] Body Builder\n");
	scanf("%d",&opcija);
	switch(opcija)
		{
			case 1 : KCal=200;break;
			case 2 : KCal=300;break;
			case 3 : KCal=400;break;
			case 4 : KCal=500;break;
			case 5 : KCal=600;break;
			case 6 : KCal=600;break;
		}
	}
	while(opcija!=1 && opcija!=2 && opcija!=3 && opcija!=4 && opcija!=5 && opcija!=6);
	printf(">> Unesite broj kilograma za koliko zelite smanjiti svoju masu (1-10): ");
	scanf("%f",&smanjiti);
	nBMI=(t-smanjiti)/(v*v/10000);
	if(nBMI<=0)
		{
			printf("\nOdabrani program nije preporucen uz predate podatke.");
			return 0;
		}
	if(BMI<round(18.5) && KCal>300)
		{
			printf("Odabrani program nije preporucen uz predate podatke.");
			return 0;
		}
	while(smanjiti<1 || smanjiti>10)
	do	{
			printf("Greska u unosu za kilazu. Ocekivane vrijednosti (1-10).");
			scanf("%f",&smanjiti);
		}
	while(smanjiti<1 || smanjiti>10);
	if(BMI<18.5)
		{
			printf("Vas BMI iznosi: %.2f (nizak).\n",BMI);
		}
	else if(BMI<25 && BMI >=18.5)
		{
			printf("Vas BMI iznosi: %.2f (normalan).\n",BMI);
		} 
	else if(BMI<=30 && BMI >=25)
		{
			printf("Vas BMI iznosi: %.2f (povisen).\n",BMI);
		}
	else
		{
			printf("Vas BMI iznosi: %.2f (visok).\n",BMI);
		}
	printf("Vas RFM iznosi: %.2f %%.\n",RFM);
	if(BMI<18.5)
		{
			return 0;
		}
	sedmica=(smanjiti*7000)/(KCal*5);
	printf("Minimalni broj sedmica za treniranje: %d.",sedmica);
	return 0;
}
