#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, qnt=0, pares=0;
    do
    {
    printf("Digite numeros inteiros: ");
    scanf("%d", &num);
    qnt=qnt+1;
        if (num%2)
        {
            pares=pares+1;
        }
    } while (num!=1000);
    printf("\nNumeros digitados: %d\nNumeros pares lidos: %d", qnt, pares);
    return 0;
}
