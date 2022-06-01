#include<stdio.h>
int main(void){
  int term,i,pos,a[9];
   for(i=0;i<=9;i++){
     printf("escreva um número:");
     scanf("%i",&a[i]);
   }
  printf("escreva o termo que você quer achar:");
  scanf("%i",&term);
  for(i=0;i<=9;i++){
    if(a[i]==term){
      printf("o termo %i esta guardado na casa %i\n",term,i);
    }
    
  }
  
}