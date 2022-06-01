#include<stdio.h>
int main(void){
  int i,a,b[8];
  printf("escreva um número: ");
  scanf("%i",&a);

  for(i=0;i<=7;i++){
    
    if(a%2 == 0){
      b[i] = 0;
    }
    else{
      b[i] = 1;
    }
    
    a = a/2;
  }
   for(i=7;i>=0;i--){
    printf("%i",b[i]);
     
   } 
  printf("\n");
}