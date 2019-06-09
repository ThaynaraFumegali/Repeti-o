#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont;
    do
    {
    printf("Digite umm numero impar para obter seu intervalo de numeros impares: ");
    scanf("%d", &num);
    }
    while (num%2==0);
        for (cont=num; cont>=0; cont--)
        {
            if (cont%2!=0)
            {
                printf("\nNumero impar: %d", cont);
            }
        }
    return 0;
}
