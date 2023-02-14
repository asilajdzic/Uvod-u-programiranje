#include <stdio.h>

struct Tacka {
    double x,y;
};

struct Pravougaonik {
    struct Tacka gore_desno;
    struct Tacka dolje_lijevo;
};

struct Pravougaonik min_pravougaonik(struct Tacka *t, int vel)
{
    struct Pravougaonik p;
    int i;
    double min_x=t[0].x, min_y=t[0].y;
    double max_x=t[0].x, max_y=t[0].y;
    for(i=0; i<vel; i++) {
        if(t[i].x>max_x) max_x=t[i].x;
        if(t[i].x<min_x) min_x=t[i].x;
        if(t[i].y>max_y) max_y=t[i].y;
        if(t[i].y<min_y) min_y=t[i].y;
    }
    p.gore_desno.x=max_x;
    p.gore_desno.y=max_y;
    p.dolje_lijevo.x=min_x;
    p.dolje_lijevo.y=min_y;
    return p;
}

int main()
{
    int vel, i;
    struct Tacka niz[100];
    printf ("Unesite broj tacaka: ");
    scanf ("%d", &vel);
    for (i=0; i<vel; i++) {
        printf ("Unesite koordinate x i y tacke %d: ", i+1);
        scanf ("%d %d", &niz[i].x, &niz[i].y);
    }

    return 0;
}
