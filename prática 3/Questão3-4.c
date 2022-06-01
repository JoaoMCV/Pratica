#include<stdio.h>
int main(void){
char p;
  printf("Escrva um caractere da tabela ASCII: ");
  scanf("%c",&p);
if( 90>= p && p > 64 || 122>= p && p > 96){
  printf("Esse caractere é uma letra.\n");
}
else if( 47>=p && p> 32 || 64>= p && p>57 || 96>=p && p>91){
    printf("Esse caractere é um caractere especial.\n"); 
  }
else if(57>= p && p>47){
  printf("Esse caractere é um número.\n");
} 
else{
  printf("Esse caractere não faz parte da tabela ASCII.");
}
}