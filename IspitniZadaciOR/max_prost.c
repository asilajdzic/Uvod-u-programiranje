#include <stdio.h>
#include <math.h>

int maxprost(int *niz, int vel)
{
    int *p=niz;
    int max=0;
    int i;
    while(p<niz+vel) {
        int prost=1;
        if(*p>1) {
            for(i=2; i<=sqrt(*p); i++) {
                if(*p%i==0) prost=0;
            }
            if(prost) {
                if(max<*p)
                    max=*p;
            }
        }
        p++;
    }
    return max;
}
int main()
{
    return 0;
}
