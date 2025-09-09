#include <stdio.h>
#include <math.h>

int main() {
  double x1, y1, x2, y2, largura, altura, perimetro;

  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  
  //cálculo da largura e altura
  if (x2>x1) {
    largura = x2-x1;
  }

  else {
   largura = x1-x2;
  }

  if (y2>y1) {
    altura = y2-y1;
  }

  else {
    altura = y1-y2;
  }

  //cálculo do perimetro
  perimetro = 2*altura+2*largura;

  printf("%.2lf", perimetro);
  
  return 0;
}