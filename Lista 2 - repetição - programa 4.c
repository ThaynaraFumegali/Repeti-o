#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1, num, opc, i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(cont==1){
        printf("\n\nMENU ESCOLHA UMA OPCAOn\n1 - Imprimir numeros pares em ordem crescente de 0 ao número digitado\n2 - Imprimir números impares em ordem decrescente do número digitado a 0;n0 - Sair\n\nSua resposta: ");
        scanf("%d", &opc);
        switch(opc)
        {
        case 1:
            for(i=0; i<=num; i++)
            {
                if(i%2==0)
               {
                  printf("%d..", i);
               }
            }
             cont++;
             break;
        case 2:
            for(i = num; i!=0; i--)
                {
                if(i%2!=0)
                {
                   printf("%d..", i);
                }
            }
             cont++;
             break;
        case 0:
            cont++;
            break;
        }
    }
    getch();
    return 0;
}
