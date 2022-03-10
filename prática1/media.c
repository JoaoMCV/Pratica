#include <stdio.h>

int main(void) {
  int A1;
  int A2;
 

  printf("Qual foi a nota da sua A1?\n");
  scanf("%d", &A1);
  printf("Qual foi a nota da sua A2?\n");
  scanf("%d", &A2);
 double media = (0.4 * A1) + (0.6 * A2);
  if(media>5)
  {
    printf("Sua média foi %lf e você passou.\n", media);
  }
  else
  {
    printf("Sua média foi %lf e você não passou.\n", media);
  }
  
  
  return 0;
}