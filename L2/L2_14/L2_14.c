#include <stdio.h>

int main() {
    char caractere;
    
    printf("RESP:");
    
    while (1) {
        
        caractere=getchar();
        
        if (caractere==' ') {
            continue;
        }
        
        else if (caractere=='.' || caractere=='?' || caractere=='!') {
            printf("%c", caractere);
            break;
        }
        
        else {
            printf("%c", caractere);
        }
    }
    
    return 0;
}

