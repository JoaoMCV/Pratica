#include <stdio.h>
int main(void) {
  int n1;
  printf("insira um número qualquer: ");
  scanf("%i", &n1);
  if (n1 % 2 > 0) {
    printf("o número é impar");
  } else {
    printf("o número é par");
  }
}
