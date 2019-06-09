#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, base;
    do
    {
        printf("Digite a altura de seu objeto: ");
        scanf("%f", &altura);
        printf("Digite a base de seu objeto, por favor: ");
        scanf("%f", &base);
    }while (altura<=0 && base<=0);
    printf("\nSua area e de: %.2f \n", (base*(altura/2)));
    return 0;
}
