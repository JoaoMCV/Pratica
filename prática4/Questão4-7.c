#include<stdio.h>
int main(void){
  int dia, mes, ano;
  printf("escreva o dia o o mês e o ano respectivamente:");
  scanf("%i %i %i",&dia,&mes,&ano);
  char diac[5],mesc[5],anoc[5];
  sprintf(diac,"%i",dia);
  sprintf(mesc,"%i",mes);
  sprintf(anoc,"%i",ano);
  if(dia>30||dia<1){
    printf("Dia não existente");
  }
  else if(mes>12||mes<1){
    printf("Mês não existente");
  }
  else{
  printf("%s/%s/%s",mesc,diac,anoc);
  printf("%s/%s/%s",diac,mesc,anoc);
  }

}