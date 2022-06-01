#include<stdio.h>
int main(void){
  char mesc[12][20] ={"Janeiro","Fevereiro","Março","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
  int mes;
  printf("Digite o numero do mes:");
  scanf("%i",&mes);
  if(mes<1){
    printf("o mes não existe");
  }
  else if(mes>12){
    printf("o mes não existe");
  }
  else
    printf("%s",mesc[mes-1]);
}