#include <stdio.h>

int main(void) {
  
  const int T = 1073741824 ;
  float p;
  

  printf("Quanto Gigabytes são?\n");
  scanf("%f", &p);
 
  float b = p * T;
  
if(p == 1){
  printf("%.0f gigabyte equivale a %.0f bytes\n ", p , b);
  }
  else{
    printf("%.0f gigabytes equivalem a %.0f bytes\n ", p , b);
  }
  return 0;
}
