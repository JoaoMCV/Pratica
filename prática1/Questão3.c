#include <stdio.h>

int main(void) {
  
  const double pi = 3.1416;
  int r;
  

  printf("Qual o raio da pizza?\n");
  scanf("%d", &r);
 double perimetro = 2 * pi * r;

  printf("O perímetro da pizza é %lf", perimetro);
  
  
  return 0;
}
