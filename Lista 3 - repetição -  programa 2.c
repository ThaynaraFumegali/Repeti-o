#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qnt, cont, num, maior=0;
    printf("Digite a quantidade de numeros que ira testar: ");
    scanf("%d", &qnt);
    for (cont=1; cont<=qnt; cont++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num>maior)
        {
            maior=num;
        }
    }
    printf("\nSeu numero maior e: %d", maior);
    return 0;
}
