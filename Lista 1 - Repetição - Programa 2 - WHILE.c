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
            i=1;
            do
            {
                i=(i+1);
                fat=1;
                j=1;
                do
                {
                j=(j+1);
                fat=(fat*j);
                }
                while (j<=i);
              E=(E+1/fat);
            }
            while(i<=num);
        }
    printf("O valor de E e: %.2f", E);
   return 0;
}
