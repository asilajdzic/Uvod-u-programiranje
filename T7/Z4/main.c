#include <stdio.h>
int obrnut (int x)	{
	int y=0;
	while(x>9)	{
		y+=x%10;
		x=x/10;
		y=y*10;
	}
	y+=x;
	return y;
}
int main() {
	int a;
	scanf("%d",&a);
	printf("%d",obrnut(a));
	return 0;
}
