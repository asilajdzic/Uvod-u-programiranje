#include <stdio.h>
int main()
{
	int i;
	printf("  X |");
	for(i=1; i<=10; i++) {
		printf("%4d",i);
	}
	printf("\n");
	for(i=1; i<=45; i++) {
		if(i==5) printf("+");
		else printf("-");
	}
	printf("\n");
	printf("  1 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",i);
	}
	printf("\n");
	printf("  2 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",2*i);
	}
	printf("\n");
	printf("  3 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",3*i);
	}
	printf("\n");
	printf("  4 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",4*i);
	}
	printf("\n");
	printf("  5 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",5*i);
	}
	printf("\n");
	printf("  6 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",6*i);
	}
	printf("\n");
	printf("  7 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",7*i);
	}
	printf("\n");
	printf("  8 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",8*i);
	}
	printf("\n");
	printf("  9 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",9*i);
	}
	printf("\n");
	printf(" 10 | ");
	for(i=1; i<11; i++) {
		printf("%3d ",10*i);
	}

	return 0;
}
