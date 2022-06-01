#include <stdio.h>
#include <string.h>
int main(void) {
  char ar[30];
  char flex[6][5]={"o","as","a","amos","ais","am"};
  char pes[6][5] ={"Eu","Tu","Ele","Nós","Vós","Eles"};
  printf("Digite um verbo terminado em AR:");
  fgets(ar,30,stdin);
  int len = strlen(ar);
  if(ar[len-2] != 'r'|| ar[len-3] != 'a'){
    printf("O verbo não termina em AR");
  }
  else
  for(int i=0;i<6;i++){
    ar[len-2]='\0';
    ar[len-3]='\0';
    ar[len-1]='\0';
    strcat(ar,flex[i]);
    printf("%s %s\n",pes[i],ar);
  }
}