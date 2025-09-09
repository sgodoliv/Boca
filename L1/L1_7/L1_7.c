#include <stdio.h>
#include <math.h>

int main() {
double temp, ftoc, ctof;
char unidade;

scanf("%lf %c", &temp, &unidade);

if (unidade=='f' || unidade=='F') {
    ftoc = (temp-32)/1.8;
    printf("%.2lf (C)", ftoc);
}

else {
    if (unidade=='c' || unidade=='C') {
        ctof = temp*1.8+32;
        printf("%.2lf (F)", ctof);
    }

    else {
        printf("Fora das Escalas Utilizáveis\n");
    }
}

return 0;

}