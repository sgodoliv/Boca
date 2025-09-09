#include <stdio.h>
#include <math.h>

int main(){
    int num=0, i=0;
    float pi, soma, div;

    scanf ("%d", &num);

    for(i=1; i<=num; i++){
        div=6/pow(i, 2);
        soma+=div;
    }
    pi=sqrt(soma);

    printf("%.6f", pi);

    return 0;
}