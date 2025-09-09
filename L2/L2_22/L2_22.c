#include <stdio.h>

int main () {
    int num = 0, num_div = 0, num_queb = 0, queb = 0, soma = 0;

    scanf("%d", &num);

    do {

        num_div = num/10;
        num_queb = num%10;
        num = num_div + num_queb;

    } while (num >= 10);

    printf("RESP:%d", num);


    return 0;
}