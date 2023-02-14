#include <stdio.h>

struct Grad {
    char naziv[20];
    int pozivni_broj;
};
void pomjeri_udesno (struct Grad *g, int i, int j)
{
    struct Grad temp=g[i];
    for(; i>j; i--)
    {
        g[i]=g[i-1];
    }
    g[j]=temp;
}
void preslozi_pozivni(struct Grad *g, int vel, int poz_broj)
{
    int i, j;
    for(i=0; i<vel; i++) {
        if(g[i].pozivni_broj==poz_broj) {
            for(j=0; j<i; j++)
                if(g[j].pozivni_broj!=poz_broj)
                {
                    pomjeri_udesno(g,i,j);
                    break;
                }
        }
    }
}

int main()
{
    struct Grad niz[6] = { { "Sarajevo", 033}, {"Tuzla", 032}, {"Mostar", 031}, {"Vogosca", 033}, {"Zenica", 034}, {"Ilidza", 033}};
    preslozi_pozivni(niz, 6, 033);
    int i;
    for (i=0; i<6; i++)
        printf("%s ", niz[i].naziv);
}
