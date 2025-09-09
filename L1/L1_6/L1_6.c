#include <stdio.h>
#include <math.h>

int main() {
double n1, n2, media;

scanf("%lf %lf", &n1, &n2);

//média das notas
media = (n1+n2)/2;

//condições
if (media>=7) {
    printf("%.1lf - Aprovado", media);
}

else {

    if(7>media && media>=5) {
        printf("%.1lf - De Recuperacao", media);
    }

    else {
        printf("%.1lf - Reprovado", media);
    }
}

return 0;

}