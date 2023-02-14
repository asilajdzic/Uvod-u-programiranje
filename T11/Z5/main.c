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
struct Vrijeme proteklo	(struct Vrijeme v1,struct Vrijeme v2)	{
	struct Vrijeme vrijeme;
	int sekunde,temp;
	int vrijeme1=v1.sati*3600+v1.minute*60+v1.sekunde;
	int vrijeme2=v2.sati*3600+v2.minute*60+v2.sekunde;
	if (vrijeme1>vrijeme2)
	sekunde=vrijeme1-vrijeme2;
	else sekunde=vrijeme2-vrijeme1;
	temp=sekunde%3600;
	vrijeme.sati=sekunde/3600;
	vrijeme.minute=temp/60;
	temp=temp%60;
	vrijeme.sekunde=temp;
	return vrijeme;
}
int main() {
    struct Vrijeme v1;
    struct Vrijeme v2;
    struct Vrijeme p;
	printf("Unesite prvo vrijeme (h m s): \n");
	v1=unos_vremena();
	printf("Unesite drugo vrijeme (h m s): \n");
	v2=unos_vremena();
	p=proteklo(v1,v2);
	printf("Izmedju dva vremena je proteklo %d sati, %d minuta i %d sekundi.",p.sati,p.minute,p.sekunde);
	return 0;
}
