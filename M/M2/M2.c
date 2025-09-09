#include <stdio.h>
#include <math.h>

int main() {
  double numero;
  int inteiro;
  double decimal;

  scanf("%lf", &numero);

  inteiro = (int)numero;
  decimal = numero - inteiro;

  printf("INTEIRO:%d,REAL:%.2lf", inteiro, decimal);

  return 0;  
}