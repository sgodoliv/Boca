#include <stdio.h>

int main() {
    int opcao, n, nova_letra, x=0, lixo;
    char letra;
    scanf("%d %d", &opcao, &n);

    if(opcao==1) {

        while((lixo=getchar()) != ' ');

        while(scanf("%c", &letra)==1) {
            if ((int)letra >= 65 && (int)letra <= 90) {
                printf("%c", letra);
            }
            else if ((int)letra >= 97 && (int)letra <= 122) {
                nova_letra=(int)letra+n;
                while (nova_letra > 122) {
                    x=nova_letra-122;
                    nova_letra=96+x;
                }
                printf("%c", nova_letra);
            }
            else if (letra=='.') {
                printf("%c", letra);
                break;
            }
            else {
                printf("%c", letra);
            }
        }
        
    }

    else if (opcao==2) {

        while((lixo=getchar()) != ' ');

        while(scanf("%c", &letra)==1) {
            if ((int)letra >= 65 && (int)letra <= 90) {
                printf("%c", letra);
            }
            else if ((int)letra >= 97 && (int)letra <= 122) {
                nova_letra=(int)letra-n;
                while (nova_letra < 97) {
                    x=97-nova_letra;
                    nova_letra=123-x;
                }
                printf("%c", nova_letra);
            }
            else if (letra == '.') {
                printf("%c", letra);
                break;
            }    
            else {
                printf("%c", letra);
            }
        } 
    }

    else {
        printf ("Operacao invalida.");
    }


    return 0;

}