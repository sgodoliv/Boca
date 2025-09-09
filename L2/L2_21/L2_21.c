#include <stdio.h>

int main () {
    int op = 0, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, num;
    char letra, lixo;

    scanf("%d", &op);

    if(op == 1) {
        scanf("%d %c", &a, &lixo);
    }

    if(op == 2) {
        scanf("%d %d %c", &a, &b, &lixo);
    }

    if(op == 3) {
        scanf("%d %d %d %c", &a, &b, &c, &lixo);
    }

    if(op == 4) {
        scanf("%d %d %d %d %c", &a, &b, &c, &d, &lixo);
    }
    
    if(op == 5) {
        scanf("%d %d %d %d %d %c", &a, &b, &c, &d, &e, &lixo);
    }

    if(op == 6) {
        scanf("%d %d %d %d %d %d %c", &a, &b, &c, &d, &e, &f, &lixo);
    }

    if(op == 7) {
        scanf("%d %d %d %d %d %d %d %c", &a, &b, &c, &d, &e, &f, &g, &lixo);
    }

    if(op == 8) {
        scanf("%d %d %d %d %d %d %d %d %c", &a, &b, &c, &d, &e, &f, &g, &h, &lixo);
    }
    
    if(op == 9) {
        scanf("%d %d %d %d %d %d %d %d %d %c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &lixo);
    }

    scanf("%d %c", &a, &lixo);

    while(scanf("%c", &letra) == 1) {

        if(letra == '"') {
            continue;
        }

        else if(letra == '%') {

            scanf("%d", &num);

            if(num == 1 && num <= op && num >= 1) {
            printf("%d", a);
            }

            if(num == 2 && num <= op && num >= 1) {
            printf("%d", b);
            }

            if(num == 3 && num <= op && num >= 1) {
            printf("%d", c);
            }

            if(num == 4 && num <= op && num >= 1) {
            printf("%d", d);
            }

            if(num == 5 && num <= op && num >= 1) {
            printf("%d", e);
            }

            if(num == 6 && num <= op && num >= 1) {
            printf("%d", f);
            }

            if(num == 7 && num <= op && num >= 1) {
            printf("%d", g);
            }

            if(num == 8 && num <= op && num >= 1) {
            printf("%d", h);
            }

            if(num == 9 && num <= op && num >= 1) {
            printf("%d", i);
            }

            if(num > op || num < 1) {
                printf("ERRO");
            }
        }

        else if(letra == '\n') {
            break;
        }

        else {
            printf("%c", letra);
        }

    }
    

    return 0;

}