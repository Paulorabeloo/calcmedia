#include <stdio.h>

int main() 
{
   double x, y, media; 

    printf("Insira o valor de x: ");
    scanf("%lf", &x);
    printf("Insira o valor de y: ");
    scanf("%lf", &y);

    media = (x + y) / 2.0;
    printf("media = %2.lf\n", media); 

    return 0; 
}