#include<stdio.h>
#include<ctype.h>
int main(void){
  char ar[20];
  printf("escreva uma palavra ou frase de até 20 caracteres:\n");
  fgets(ar,20,stdin);
  for(int i=0;ar[i]!='\0';i++){
    ar[i] = toupper(ar[i]);
  }
  printf("%s",ar);
  for(int i=0;ar[i]!='\0';i++){
    ar[i] = tolower(ar[i]);
  }
  printf("%s",ar);
  }