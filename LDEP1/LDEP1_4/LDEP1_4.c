#include <stdio.h>

int main() {
    int i = 0, den = 1, qtd = 0, cont = 0;

    scanf("%d", &qtd);

    for (i = 2; i <= qtd; i++) {
        cont = 0;
        den = 1;
        while (den <= i) {
            if (i % den == 0) {
                cont++;
                den++;
            } else {
                den++;
            }
        }
        if (cont == 2)
            printf("%d ", i);
    }

    return 0;
}