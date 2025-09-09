#include <stdio.h>
#include <math.h>

int main() {
int num;
double real, deci, divi;

scanf("%d", &num);

real = (double)num;
divi = real/(double)2;
deci = divi - (int)divi;

if (deci==(double)0) {
    printf ("Par");
}
else {
    printf("Impar");
}

return 0;

}