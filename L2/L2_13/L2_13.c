#include <stdio.h>

int main() {
    char caractere;

    while(1) {

        caractere=getchar();

        if((int)caractere>96){
            caractere=caractere-32;
            printf("%c", caractere);
        }
        else if (caractere=='.' || caractere=='?' || caractere=='!'){
            printf("%c", caractere);
            break;
        }
        else {
            printf("%c", caractere);
        }
    }

    return 0;

}