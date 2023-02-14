#include <stdio.h>
int zamijeni (int *a, int *b)	{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	return *a,*b;
}
int main() {
	return 0;
}
