#include <stdio.h>
#include <math.h>
int daj_prost()
{
    static int posljednji=2;
    int vrati=posljednji;
    int i, j;
    for(i=vrati+1;; i++) {
        int prost=1;
        for(j=2;j<=sqrt(i);j++)
            if(i%j==0) 
            {
                prost=0;
                break;
            }
        if(prost) {
            posljednji=i;
            break;
        }
    }
    return vrati;
}
int main() 
{
    return 0;
}