#include <stdio.h>
#include <math.h>

int main() {
    int i=0, n=0, d=0, num=0, den=0, opcao=0;
    double soma=0, div=0, pot;

    scanf("%d", &opcao);

    if(opcao==1){
        n=-1;
        for(i=1; i<=50; i++){
            num = n+2;
            den = d+1;
            div = (double)num/(double)den;
            soma+=div;
            n = num;
            d = den;
        }
    }

    if(opcao==2){
        for(i=1; i<=50; i++){
            pot = pow(2, i);
            den = 50 - d;
            div = pot/(double)den;
            soma+=div;
            d++;
        }
    }

    if(opcao==3){
        n=-1;
        for(i=1; i<=10; i++){
            num = i;
            pot = pow(i, 2);
            div = (double)num/pot;
            soma+=div;
        }
    }
    

    printf("%.6lf", soma);

    return 0;

}