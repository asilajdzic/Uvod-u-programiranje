#include <stdio.h>
int main() {
	int operand=0,a=0,b=0,c=0,desetica,jedinica,i;
	do	{
	do	{
	printf("\nOdaberite cjelobrojnu operaciju:\n[1] Sabiranje\n[2] Oduzimanje\n[3] Mnozenje\n[4] Dijeljenje\n[5] Izlaz iz programa\n>>"); 
	scanf("%d",&operand);
	if(operand == 5)	{
		return 0;
	}
	}	
	while(operand < 1 || operand > 5);
	switch(operand)	{
		case 1 : printf("\n[1] Sabiranje\n");break;
		case 2 : printf("\n[2] Oduzimanje\n");break;
		case 3 : printf("\n[3] Mnozenje\n");break;
		case 4 : printf("\n[4] Dijeljenje\n");break;
	}
	printf("Unesite operande: ");
	scanf("%d %d",&a,&b);
	if((operand == 1 && a+b>99) || (operand == 2 && a<b) || (operand == 2 && a-b>99) || (operand == 3 && a*b>99) || (operand==4 && b==0) || (operand == 4 && b>99))	{
		for(i=0;i<5;i++)
			printf("*");
		printf("\n*\n");
		for(i=0;i<17;i++)	{
			if(i<5 || i>11)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		for(i=0;i<17;i++)	{
			if(i==0 || i==12)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
		for(i=0;i<17;i++)	{
			if(i<5 || i == 12)
			printf("*");
			else
			printf(" ");
		}
	}
	if(!((operand == 1 && a+b>99) || (operand == 2 && a-b<0) || (operand == 2 && a-b>99) || (operand == 3 && a*b>99) || (operand==4 && b==0) || (operand == 4 && b>99)))	{
	switch(operand)
	{
		case 1 : c=a+b;break;
		case 2 : c=a-b;break;
		case 3 : c=a*b;break;
		case 4 : c=a/b;break;
	}
	desetica=c/10;
	jedinica=c%10;	
	//prvi red
	if(desetica == 0 || desetica == 2 || desetica == 3 || desetica == 5 || desetica == 6 || desetica == 7 || desetica == 8 || desetica == 9)	{
		if(jedinica == 0 || jedinica == 2 || jedinica == 3 || jedinica == 5 || jedinica == 6 || jedinica== 7 || jedinica == 8 || jedinica == 9) {
			for(i=0;i<17;i++)	{
				if(i<5 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 1)	{
				for(i=0;i<17;i++)	{
				if(i<5 || i > 15)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 4)	{
			for(i=0;i<17;i++)	{
				if(i<5 ||  i==11 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else if(desetica == 1)	{
		if(jedinica == 0 || jedinica == 2 || jedinica == 3 || jedinica == 5 || jedinica == 6 || jedinica== 7 || jedinica == 8 || jedinica == 9) {
			for(i=0;i<17;i++)	{
				if(i == 4 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 1)	{
				for(i=0;i<17;i++)	{
				if(i == 4 || i > 15)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 4)	{
			for(i=1;i<17;i++)	{
				if(i==4 ||  i==11 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else if(desetica == 4)	{
		if(jedinica == 0 || jedinica == 2 || jedinica == 3 || jedinica == 5 || jedinica == 6 || jedinica== 7 || jedinica == 8 || jedinica == 9) {
			for(i=0;i<17;i++)	{
				if( i== 0 || i==4 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 1)	{
				for(i=0;i<17;i++)	{
				if(i==4 || i > 15)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 4)	{
			for(i=0;i<17;i++)	{
				if(i == 0 ||i==4 ||  i==11 || i==16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	printf("\n");
	//drugi red
	if(desetica == 0 || desetica == 8 || desetica == 4 || desetica == 9)	{
		if(jedinica == 0 || jedinica == 8 || jedinica == 4 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 1 || jedinica == 2 || jedinica == 3 || jedinica == 7) {
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
			
		}
		else  if(jedinica == 5 || jedinica == 6){
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 12)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else if(desetica == 1 || desetica == 2 || desetica == 3 || desetica == 7)	{
		if(jedinica == 0 || jedinica == 8 || jedinica == 4 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 1 || jedinica == 2 || jedinica == 3 || jedinica == 7) {
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
			
		}
		else  if(jedinica == 5 || jedinica == 6){
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 12)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else	{
		if(jedinica == 0 || jedinica == 8 || jedinica == 4 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 1 || jedinica == 2 || jedinica == 3 || jedinica == 7) {
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
			
		}
		else  if(jedinica == 5 || jedinica == 6){
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 12)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	printf("\n");
	//treci red
	if(desetica == 2 || desetica == 3 || desetica == 4 || desetica == 5 || desetica == 6 || desetica == 8 || desetica == 9)	{
		if(jedinica == 2 || jedinica == 3 || jedinica == 4 || jedinica == 5 || jedinica == 6 || jedinica== 8 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i<5 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else {
			for(i=0;i<17;i++)	{
				if(i<5 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else if(desetica == 7 || desetica == 1)	{
		if(jedinica == 2 || jedinica == 3 || jedinica == 4 || jedinica == 5 || jedinica == 6 || jedinica== 8 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 0)	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 12 || i == 16)
				printf("*");
				else
				printf(" ");
			}
		}
		else {
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else if(desetica == 0)	{
		if(jedinica == 2 || jedinica == 3 || jedinica == 4 || jedinica == 5 || jedinica == 6 || jedinica== 8 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i == 0 ||  i == 4 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 0)	{
				for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else {
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	
		
	}
	else	{
		if(jedinica == 2 || jedinica == 3 || jedinica == 4 || jedinica == 5 || jedinica == 6 || jedinica== 8 || jedinica == 9)	{
			for(i=0;i<17;i++)	{
				if(i == 0 ||  i == 4 || i > 11)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 0)	{
				for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else {
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	printf("\n");
	//cetvrti red
	if(desetica == 0 || desetica == 6 || desetica == 8)	{
		if(jedinica == 0 || jedinica== 6 || jedinica == 0 || desetica == 8)	{
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 2)	{
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 4 ||  i == 12)
				printf("*");
				else 
				printf(" ");
			}
		}
		else	{
			for(i=0;i<17;i++)	{
				if(i == 0 ||  i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else if(desetica == 2)	{
			if(jedinica == 0 || jedinica== 6 || jedinica == 0 || desetica == 8)	{
			for(i=0;i<17;i++)	{
				if(i == 0 ||  i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 2)	{
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else	{
			for(i=0;i<17;i++)	{
				if(i == 0 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	else	{
		if(jedinica == 0 || jedinica== 6 || jedinica == 0 || desetica == 8)	{
			for(i=0;i<17;i++)	{
				if(i == 4 ||  i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else if(jedinica == 2)	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 12 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
		else	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 16)
				printf("*");
				else 
				printf(" ");
			}
		}
	}
	printf("\n");
	//peti red
	if(desetica == 1 || desetica == 4 || desetica == 7)	{
		if(jedinica == 1 || jedinica == 4 || jedinica == 7)	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i == 16)
				printf("*");
				else
				printf(" ");
			}
		}
		else	{
			for(i=0;i<17;i++)	{
				if(i == 4 || i>11)
				printf("*");
				else
				printf(" ");
			}
		}
	}
	else	{
				if(jedinica == 1 || jedinica == 4 || jedinica == 7)	{
			for(i=0;i<17;i++)	{
				if(i < 5 || i == 16)
				printf("*");
				else
				printf(" ");
			}
		}
		else	{
			for(i=0;i<17;i++)	{
				if(i < 5 || i>11)
				printf("*");
				else
				printf(" ");
			}
		}
	}
	}
}
while(operand != 5);
return 0;
}