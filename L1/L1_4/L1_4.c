#include <stdio.h>
#include <math.h>

int main() {
  float pi=3.141592, raio1=0, raio2=0, area1=0, area2=0;

  scanf("%f", &raio1);

  //area1
  area1 = pi*pow(raio1, 2);

  //area2
  area2 = area1/2;

  //raio2
  raio2 = sqrt(area2/pi);

  printf("%.2f %.2f", area1, raio2);

  return 0;
    
}