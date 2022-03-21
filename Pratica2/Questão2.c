#include<stdio.h>
#include<math.h>

int main(void){
int n1,n2,q,r;
  printf("escreva os dois numeros\n");
  scanf("%i %i",&n1,&n2);
  q = n1/n2;
  r = n1%n2;
    printf("o quociente é %i e restou %i\n",q,r);
}