#include <stdio.h>
#include <math.h>

int main()
{
    int N,i,j,k, prolazi,X=-1;
    int niz[101],rez[101];
    printf("Unesi N: ");
    scanf("%d", &N);
    printf("Unesi niz: ");
    for(i=0; i<N; i++)
        scanf("%d", &niz[i]);
    for(i=0; i<1e9; i++) {
        prolazi=1;
        int x=i, brcif1=0, brcif2, max;
        int bin1[100]= {0};
        while(x) {
            bin1[brcif1]=x%2;
            x/=2;
            brcif1++;
        }
        for(j=0; j<N; j++) {
            int bin2[100]= {0};
            int bin3[100]= {0};
            brcif2=0;
            x=niz[j];
            while(x) {
                bin2[brcif2]=x%2;
                x/=2;
                brcif2++;
            }
            max=brcif1;
            if(max<brcif2) max=brcif2;
            for(k=0; k<max; k++) {
                if((bin1[k] && !bin2[k]) || (!bin1[k] && bin2[k])) {
                    bin3[k]=1;
                } else bin3[k]=0;
            }
            for(k=0; k<max; k++) {
                x+=bin3[k]*pow(2,k);
            }
            rez[j]=x;
        }
        for(j=0; j<N-1; j++) {
            if(rez[j]>rez[j+1]) prolazi=0;
        }
        if(prolazi) {
            X=i;
            break;
        }
    }
    printf("\nBroj X = %d", X);
}
