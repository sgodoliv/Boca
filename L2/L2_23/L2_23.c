#include <stdio.h>

int main() {
    char letra;
    int nivel_parenteses = 0;
    int imprimindo = 0;

    printf("RESP:");

    while (scanf("%c", &letra) == 1) {
        if (letra == '(') {
            nivel_parenteses++;
            if (nivel_parenteses == 1) {
                imprimindo = 1;
            }
            else if (imprimindo) {
                printf("%c", letra);
            }
        } else if (letra == ')') {
            nivel_parenteses--;
            if (nivel_parenteses == 0) {
                imprimindo = 0;
            }
            if (imprimindo) {
                printf("%c", letra);
            }
        } else if (letra == '.') {
            if (nivel_parenteses == 0) {
                break;
            } else {

                if (imprimindo) {
                    printf("%c", letra);
                }
            }
        } else {
            if (imprimindo) {
                printf("%c", letra);
            }
        }
    }

    return 0;
}