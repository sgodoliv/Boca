#include <stdio.h>

int main() {
    int num=0, menor_num=32000, pos_atual=0, primeira_pos=-33000, ultima_pos=-33000, tamanho=0;
    char lixo;

    while (scanf("%d", &num)==1) {

        if (num < menor_num) {
            menor_num = num;
        }

    }
    
   while ((lixo = getchar()) != '\n' && lixo != EOF);
    
    while (scanf("%d", &num)==1) {

        if (num == menor_num) {

            if (primeira_pos==-33000){
                primeira_pos=pos_atual;
            }
            ultima_pos=pos_atual;

        }
        pos_atual++;
        tamanho++;

    }

    if (primeira_pos==-33000) {
        primeira_pos=tamanho;
        ultima_pos=tamanho;
    }

        
    printf ("%d %d %d", menor_num, primeira_pos, ultima_pos);

    return 0;

}