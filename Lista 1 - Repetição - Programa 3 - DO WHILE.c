#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, j, i, y;
    float fat;
    printf("Digite quantos numeros voce quer digitar: ");
    scanf("%d", &num);
    i=1
    for (i<=num)
    {
        i=(i+1);
        printf("Digite um numero para obter seu fatorial: ");
        scanf("%f", &fat);
         for (y=1; y<=fat; y++)
            {
                fat=1;
                for(j=1;j<=y; j++)
                {
                fat=(fat*j);
                };
            };
        printf("Seu resultado de fatorial e de: %.2f", fat);
    }
    return 0;
}
