#include <stdio.h>

int main(){
    int num=0, qtd=0, soma=0, maior_num=0;
    float media;

    while (scanf("%d", &num) == 1 && num != 0) {
        if (num > maior_num){
            maior_num = num;
        }
        qtd++;
        soma+=num;
        media=(float)soma/qtd;
        printf("%d %.6f\n", maior_num, media);
    }

    return 0;
}