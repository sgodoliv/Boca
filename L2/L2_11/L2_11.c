#include <stdio.h>
#include <math.h>

int main(){
    int n=0, m=0;
    double i=0, numdiv=0, decinum=0, prinum=0, segnum=0, soma=0, pots=0;

    scanf("%d %d", &n, &m);

    for (i=n+1; i<m; i++){
        
        numdiv=i/100;
        
        decinum=numdiv-(int)numdiv;
        
        prinum=numdiv-decinum;
        
        segnum=decinum*100;
        
        soma=prinum+segnum;
        
        pots=pow(soma, 2);
        

        if((int)pots==(int)i) {
            printf("%d\n", (int)i);
        }
        else {

        }

    }

    return 0;
}