#include<stdio.h>

int main(){
    int i=0, num=0, qtd=0;

    scanf("%d", &num);

    for (i=1; i<=num; i++){
        if (num%i==0){
            qtd++;
        }
        else{

        }
    }

    if (qtd==2){
        printf("Primo");
    }
    else {
        printf("Nao primo");
    }

    return 0;
}