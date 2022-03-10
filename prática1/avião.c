#include <stdio.h>
#include <math.h>
int main()
{
    int a,d ;
    printf("Qual a angulação do avião?\n");
    scanf("%d",&a);
    printf("Quantos metros o avião já andou?\n");
    scanf("%d",&d);
    float h =sin(a) * d;
    printf("a altitude do avião é %.2f",h);
    return 0;
}