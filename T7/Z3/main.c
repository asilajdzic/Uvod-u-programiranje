#include <stdio.h>
int prost (int x)	{
	int i,prost=1;
	if(x==1)
	prost=0;
	for(i=0;i<x;i++)	{
		if(i>1 && x%i==0)	{
		prost=0;
		break;
		}
	}
	return prost;
}
int main() {
	int i;
	for(i=1;i<100;i++)	{
		prost(i);
		if(prost(i)==1)
		printf("%d\n",i);
	}
	return 0;
}
