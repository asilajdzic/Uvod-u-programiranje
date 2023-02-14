#include <stdio.h>

struct Kompleksni {
    int re, im;
};

int konjugovano_kompleksni (struct Kompleksni *p1, struct Kompleksni *p2, struct Kompleksni *rez)
{
    int vel=0;
    while(p1<p2) {
        struct Kompleksni *q=rez;
        int duplikat=0;
        while(q<rez+vel) {
            if(p1->re == q->re && p1->im == -(q->im)) duplikat=1;
            q++;
        }
        if(!duplikat) {
            q->re=p1->re;
            q->im=-(p1->im);
            vel++;
        }
        p1++;
    }
    return vel;
}
int main()
{
    struct Kompleksni niz1[5] = {{5,5}, {3,3}, {-5, -5}, {5,5}, {-3,3}};
    struct Kompleksni niz2[5];
    int vel = konjugovano_kompleksni (niz1, niz1 + 5, niz2);
    int i;
    for (i=0; i<vel; i++)
        printf("(%d,%d) ",niz2[i].im,niz2[i].re);
    return 0;
}
