#include <stdio.h>

int main(void) {
  
  
  
  
  const float COFINS = 0.076;
  const float PISPASEP = 0.0165;
  const float ICMS = 0.17;
  float p;
  

  printf("Qual o preço do produto sem impostos?\n");
  scanf("%f", &p);
 
  float pf = (1 +COFINS + PISPASEP + ICMS) * p;
  float imp = pf - p;

  printf("O preço total será %.2fR$. Pagando um total de %.2fR$ em impostos\n ", pf,imp);
  
  return 0;
}