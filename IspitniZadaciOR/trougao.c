#include <stdio.h>
#include <math.h>
#define E 0.0001
int main()
{
    double x1,x2,x3,y1,y2,y3;
    double a,b,c;
    double alfa,beta,gama;
    printf("Unesite koordinate tacke t1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Unesite koordinate tacke t2: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Unesite koordinate tacke t3: ");
    scanf("%lf %lf", &x3, &y3);
    if ((y3 - y2) * (x2 - x1) == (y2 - y1) * (x3 - x2)) printf("Ove tri tacke su kolinearne\n");
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    printf("%lf %lf %lf\n",a,b,c);
    gama=acos((a*a+b*b-c*c)/(2*a*b));
    beta=acos((a*a+c*c-b*b)/(2*a*c));
    alfa=acos((b*b+c*c-a*a)/(2*b*c));
    int ugao;
    ugao=gama*180/(4*atan(1))*3600; //pretpostavim da je gama najveca i onda trazim najveci ugao
    if(alfa>gama)
        ugao=alfa*180/(4*atan(1))*3600;
    if(beta>alfa && beta>gama)
        ugao=beta*180/(4*atan(1))*3600;
    //sada mi je "ugao" najveci ugao izrazen u sekundama
    //znas provjeriti ove duzine stranica i uglove da vidis koji je trougao
    printf("Najveci ugao ima: %d stepeni, %d minuta i %d sekundi.",ugao/3600,ugao%3600/60,ugao%60);
    return 0;
}
