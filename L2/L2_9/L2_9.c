#include<stdio.h>

int main() {
    int n=0, m=0, i=0, j=0, qtd=0, p=0, cont=0;

    scanf("%d %d", &n, &m);

    for (i=n+1; i<m; i++){
        qtd=0;
        for (j=1; j<=i; j++){
            if (i%j==0){
                qtd++;
            }
            else{

            }
        }
        cont=0;
        if (qtd==2){
            printf("%d\n", i);
            for(p=i+1; p<m; p++){
                if(p%i==0){
                    printf("%d ", p);
                    cont++;
                }
                else{
                    
                }
            }
            if (cont==0){
                printf("*\n");
            }
            else {
                printf("\n");
            }
        }
        else{

        }
    }

    return 0;
}