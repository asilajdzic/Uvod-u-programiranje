#include <stdio.h>
#include <math.h>
#define e 0.0001
int main()
{
	float p1,q1,r1,p2,q2,r2,d;
	float x,y,x1,x2,y1,y2,a,h,b,m,n;
	printf("Unesite koordinate centra kruznice A: ");
	scanf("%f%f",&p1,&q1);
	printf("Unesite poluprecnik kruznice A: ");
	scanf("%f",&r1);
	if(r1<=0)
		{
			printf("Pogresan unos !");
			return 0;
		}
	printf("Unesite koordinate centra kruznice B: ");
	scanf("%f%f",&p2,&q2);
	printf("Unesite poluprecnik kruznice B: ");
	scanf("%f",&r2);
		if(r2<=0)
		{
			printf("Pogresan unos !");
			return 0;
		}
	/*r1=round(r1*10000)/10000;
	r2=round(r2*10000)/10000;
	p1=round(p1*10000)/10000;
	p2=round(p2*10000)/10000;
	q1=round(q1*10000)/10000;
	q2=round(q2*10000)/10000;*/
	d=sqrt((p1-p2)*(p1-p2)+(q1-q2)*(q1-q2));
	b=(d*d+r2*r2-r1*r1)/(2*d);
	a=fabs(d-b);
	h=sqrt(r2*r2-b*b);
	x=p1+(a*(p2-p1))/d;
	y=q1+(a*(q2-q1))/d;
	m=(h*(p2-p1)/d);
	n=(h*(q2-q1)/d);
	x1=x+n;
	x2=x-n;
	y1=y-m;
	y2=y+m;
	/*x1=round(x1*10000)/10000;
	x2=round(x2*10000)/10000;
	y1=round(y1*10000)/10000;
	y2=round(y2*10000)/10000;*/
	if(fabs(r1-r2)<e && fabs(p1-p2)<e && fabs(q1-q2)<e)
		{
			printf("Kruznice su identicne.");
		}
	else if(r1+r2<d) // nit se sijeku, nit dodiruju, nit su jedna u drugoj
		{
			printf("Kruznice se ne sijeku.");
		}
	else if(r1+r2>d && d>fabs(r2-r1)) // sijeku se u dvije tacke
		{
			printf("Kruznice se sijeku u tackama (%.2f,%.2f) i (%.2f,%.2f).",x1,y1,x2,y2);
		}
	else if(r2>d+r1 || r1>d+r2) // jedna u drugoj
		{
			printf("Jedna kruznica je sadrzana u drugoj.");
		}
	else if(d-fabs(r2-r1)<e || d-r1-r2<e) // u jednoj
		{
			printf("Kruznice se dodiruju u tacki (%.2f,%.2f).",x,y);
		}

}
