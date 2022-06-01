#include<stdio.h>

int main(void){
int nota;
  printf("insira sua nota: ");
  scanf("%i",&nota);
  switch(nota){
    case 1:
      printf("A nota %i é ruim.\n",nota);
    break;
    case 2:
      printf("A nota %i é insuficiente.\n",nota);
    break;
    case 3:
      printf("A nota %i é suficiente\n",nota);
    break;
    case 4:
      printf("A nota %i é boa\n",nota);
    break;
    case 5:
      printf("A nota %i é ótima\n",nota);
    default:
      printf("Nota inválida\n");
      break;
    
  }
}