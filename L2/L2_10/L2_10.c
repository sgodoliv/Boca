#include <stdio.h>

int main() {
    int m=0, n=0, i=0, mult=0, j=0;

    scanf ("%d %d", &n, &m);
    
    for (j=n; j<=m; j++){

        for (i=1; i<=10; i++){
            mult=j*i;
            printf("%d x %d = %d\n", j, i, mult);
     
        }
    }

    return 0;

}