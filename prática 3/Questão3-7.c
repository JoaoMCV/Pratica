#include<stdio.h>
int main(void){
int i,fib3;
int fib1 = 0;
int fib2 = 1;
  for(i=0;i<10;i++){
    printf("%d ",fib1);
    fib3 = fib1 +fib2;
    fib1 = fib2;
    fib2 = fib3;
  }
  
}