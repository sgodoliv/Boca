#include<stdio.h>

int main() {
    int n=0, m=0, i=0, j=0, qtd=0;

    scanf("%d %d", &n, &m);

    printf("RESP:");

    for (i=n+1; i<m; i++){
        qtd=0;
        for (j=1; j<=i; j++){
            if (i%j==0){
                qtd++;
            }
            else{

            }
        }
        if (qtd==2){
            printf("%d ", i);
        }
        else{

        }
    }

    return 0;
}