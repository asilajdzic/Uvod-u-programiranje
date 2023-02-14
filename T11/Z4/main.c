#include <stdio.h>
struct Vrijeme {
        int sati;
        int minute;
        int sekunde;
    };
struct Vrijeme unos_vremena()	{
	struct Vrijeme v;
	scanf("%d %d %d",&v.sati,&v.minute,&v.sekunde);
	return v;
}
int proteklo	(struct Vrijeme v1,struct Vrijeme v2)	{
	int vrijeme1=v1.sati*3600+v1.minute*60+v1.sekunde;
	int vrijeme2=v2.sati*3600+v2.minute*60+v2.sekunde;
	if (vrijeme1>vrijeme2)
	return vrijeme1-vrijeme2;
	else return vrijeme2-vrijeme1;
}
int main() {
    struct Vrijeme v1;
    struct Vrijeme v2;
	printf("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena();
	printf("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena();
	printf("Izmedju dva vremena je proteklo %d sekundi.",proteklo(v1,v2));
	return 0;
}
