#include<stdio.h>
int main(void){
  char a[6][5];

printf("Escreva uma frase de no maximo 30 caracteres:");
for(int i=0;i<6;i++){
  scanf("%5[^\n]s",a[i]);
}
  printf("a frase foi:%s",a);
  for(int i=0;i<6;i++){
    printf("\n");
    for(int j =0;j<5;j++){
      printf("%c ",a[j][i]);
    }
  }
  printf("\n");
}