#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, opc, num1, num2, y, x, primo=0, a, b;
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    printf("\n1 - Mostrar as tabuadas dos dois numeros.\n2 - Mostre os numeros primos dos dois numeros.\n3 - Informe se os numeros sao par ou impar.\n4 - Fazer uma contagem regressiva dos dois numeros ate zero. \n\n\tDigite sua opcao: ");
    scanf("%i", &opc);
    switch (opc)
    {
        case 1:
        {
            printf("\n\nA tabuada do numero %i", num1);
            for(cont=1 ; cont<11; cont++)
            {
                printf("\n%ix%i = %i", cont, num1, (cont*num1));
            }
            printf("\n\nA tabuada do numero %i", num2);
            for(y=1; y<11; y++)
            {
                printf("\n%ix%i = %i", y, num2, (y*num2));
            }
        }
        break;
        case 2:
            for(x=1; x<num1; x++)
            {
                for (y=1; y<=x; y++)
                {
                    if (x%y==0)
                    {
                        primo++;
                    }
                }
                     if (primo>2)
                    {
                        printf("%i nao numero primo!\n", x);
                    }
                    else
                    {
                        printf("%i e primo!\n", x);
                    }
                    primo=0;
            }
            for(a=1; a<num2; a++)
            {
                for (b=1; b<=a; b++)
                {
                    if (a%b==0)
                    {
                        primo++;
                    }
                }
                     if (primo>2)
                    {
                        printf("%i nao numero primo!\n", a);
                    }
                    else
                    {
                        printf("%i e primo!\n", a);
                    }
                    primo=0;
            }
	break;
        case 3:
            {
                if (num1%2==0)
                {
                    printf("\n%i PAR!", num1);
                }else
                {
                    printf("\n%i IMPAR!", num1);
                }
                if (num2%2==0)
                {
                    printf("\n%i PAR!", num2);
                }else
                {
                    printf("\n%i IMPAR!", num2);
                }
            }
    break;
        case 4:
            {
                printf("\n\nContagem regressiva do primeiro numero:");
                while (num1>0)
                {
                    printf("\n%i", num1);
                    num1=num1-1;
                }
                printf("\n\nContagem regressiva do segundo numero:");
                 while (num2>0)
                {
                    printf("\n%i", num2);
                    num2=num2-1;
                }
            }
    break;
        default:
            printf("NAO RECONHECO SEU COMANDO!");
    }
    return 0;
}
