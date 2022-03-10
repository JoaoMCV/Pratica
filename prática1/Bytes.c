#include <stdio.h>

int main(void) {
  
  const int T = 1073741824 ;
  float p;
  

  printf("Quanto Gigabytes são?\n");
  scanf("%f", &p);
 
  float b = p * T;
  

  printf("isso equivale à %.0f bytes\n ", b);
  
  return 0;
}