#include <stdio.h>
#include <math.h>
#define PI 3.14159265358
struct Tacka {
    double x,y;
};
struct Pravougaonik
{
    struct Tacka dole_lijevo,gore_desno;
};
double obim_pravougaonika(struct Pravougaonik p)
{
    double obim = 2*(fabs(p.gore_desno.x-p.dole_lijevo.x) + fabs(p.gore_desno.y - p.dole_lijevo.y));
    return obim;
}
double povrsina_pravougaonika(struct Pravougaonik p)
{
    double povrsina=fabs(p.gore_desno.x-p.dole_lijevo.x) * fabs(p.gore_desno.y - p.dole_lijevo.y);
    return povrsina;
}
int tacka_u_pravougaoniku (struct Tacka t,struct Pravougaonik p)
{
    if(t.x>=p.dole_lijevo.x && t.x<=p.gore_desno.x && t.y>=p.dole_lijevo.y && t.y<=p.gore_desno.y ) return 1;
    return 0;
}
int main() {
    return 0;
}