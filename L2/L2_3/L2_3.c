#include <stdio.h>

int main() {
    int maior_num=0, menor_num=9999999, qtd=0, i=0, num=0, num_par=0, num_impar=0, soma=0;
    float media;

    scanf("%d", &qtd);

    for(i=0; i<qtd; i++){
        scanf("%d", &num);
        if(num>=maior_num){
            maior_num=num;
        }
        if(num<=menor_num){
            menor_num=num;
        }
        if(num%2==0){
            num_par++;
        }
        else{
            num_impar++;
        }
        soma += num;
    }
    media=(float)soma/qtd;

    printf("%d %d %d %d %.6f", maior_num, menor_num, num_par, num_impar, media);
    
    return 0;
}
