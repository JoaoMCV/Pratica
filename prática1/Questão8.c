#include <stdio.h>
#include <math.h>
int main(void)
{
    int Sec,seg,min,hor;
printf("Tempo em segundos:");
scanf("%i",&Sec);
  min = Sec/60;
  seg = Sec%60;
  hor = min/60;
  printf("hora:%i min:%i segundos:%i",hor, min,seg);
}