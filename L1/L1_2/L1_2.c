#include <stdio.h>
#include <math.h>

int main() {
  double altura, largura, perimetro;

  scanf("%lf %lf", &altura, &largura);

  //perímetro
  perimetro = 2*altura+2*largura;

  printf("%.2lf", perimetro);
  
  return 0;
}