#include <stdio.h>
#include <math.h>

int main(void){

 int y,m,d,id;
  printf("digite sua idade em anos, meses e dias:\n");
if(scanf("%i %i %i",&y,&m,&d) == 3) {
   id = ((y * 365) + (m * 30) + d);
} else {
   puts("Erro. Por favor digite os três numeros.");
}

  
printf("Sua idade em dias é %i",id);



  
}