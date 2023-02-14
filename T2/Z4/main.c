#include <stdio.h>
int main() {
	printf("Unesite tri broja: ");
	int a, b, c, p=0;
	scanf("%d%d%d", &a, &b, &c );
		if(!(a>=50 && a<=200 && b>=50 && b<=200 && c>=50 && c<=200))
			printf("Svi brojevi nisu iz intervala 50 do 200");
		else 
		{
			if(a>=b)
				{
					p=b;
					b=a;
					a=p;
					
				}
			if(b>=c)
				{
					p=c;
					c=b;
					b=p;
				}
			if(a>=b)
				{
					p=b;
					b=a;
					a=p;
			
				}
		printf("Brojevi poredani po velicini glase: %d,%d,%d\n",a, b, c);
			if(a==b && b==c)
				printf("Unesen je 1 razlicit broj");
			else if(a==b || b==c || a==c)
				printf("Unesena su 2 razlicita broja");
			else
			printf("Unesena su 3 razlicita broja");
		}
	return 0;
	
}
