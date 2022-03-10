##include <stdio.h>
#include <math.h>
int main(void) {
  
 float a, b, c;
  
  printf("Digite os valores de a,b e c respectivamente.\n");
  scanf("%f""%f""%f", &a, &b, &c);

  float r = sqrt(b*b -4 * a * c);
  float r1,r2,d; 
  d = 2 * a;
  r1 = ( - b + r ) / d; 
  r2 = ( - b - r ) / d;
 printf("A primeira raíz é%.2f e a segunda é %.2f",r1,r2);
  

  return 0;
}