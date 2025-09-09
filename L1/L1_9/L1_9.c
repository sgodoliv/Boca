#include <stdio.h>
#include <ctype.h>

int main() {
char letra, letram;
int vletram;

scanf("%c", &letra);

if (isupper(letra)) {
    printf ("A letra deve ser minuscula!");
}
else {
    if (islower(letra)) {
        vletram = (int)letra - 32;
        letram = (char)vletram;
        printf ("%c(%d)", letram, vletram);
    }
    else {
        printf ("Nao e letra!");
    }
}

return 0;

}