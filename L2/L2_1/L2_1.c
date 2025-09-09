#include <stdio.h>

int main(){
    int m=0, n=0, par=0, i;

    scanf("%d %d", &n, &m);

    printf("RESP:");

    for(i=n+1; i<m; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }

    return 0;
}