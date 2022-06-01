#include<stdio.h>
int main(void){
  int i,n1,m1,m2;
  m1 =-2147483648;
  m2 = 2147483647;
  for(i=0;i<=10;i++){
    printf("escreva um número: ");
    scanf("%i",&n1);
    if(n1>=m1){
       m1 = n1;
    }
    else if(n1<=m2){
      m2 = n1;
    }
    else{
      
    }
  }
  printf("o maior é %i e o menor é %i",m1,m2);
}