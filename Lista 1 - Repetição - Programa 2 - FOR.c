#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float num, j, fat, E;
    printf("Digite um um numero postivo: ");
    scanf("%f", &num);
        if (num<0)
        {
            printf("Este numero e menor que zero! \nDigite novamente, um numero POSITIVO: ");
            scanf("%f", &num);
            while (num<0)
            {
                printf("ESTE NUMERO E MENOR QUE ZERO!\nSO EXECUTO CALCULOS COM NUMEROS POSITIVOS!\n\nDigite novamente: ");
                scanf("%f", &num);
            };
        }
        else (num>0);
        {
            for (i=1; i<=num; i++)
            {
                fat=1;
                for(j=1;j<=i; j++)
                {
                fat=(fat*j);
                };
            E=(E+1/fat);
            };
        }
    printf("O valor de E e: %.2f", E);
    return 0;
}
