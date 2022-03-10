#include <stdio.h>

int main(void) {
  int b,h;
 

  printf("Qual a medida da base?\n");
  scanf("%d", &b);
  printf("Qual a altura do trinagulo?\n");
  scanf("%d", &h);
 double area = (b * h)/2;

  printf("A área do triangulo é %lf", area);
  
  
  return 0;
}
