#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont, pessoas, mas=0, fem=0, sexo;
    char nome[20];
    printf("Quantas pessoas iram se registrar? ");
    scanf("%d", &pessoas);
    for(cont = 0; cont<pessoas; cont++)
        {
        fflush(stdin);
        printf("Digite seu nome: ");
        scanf("%c", &nome);
        fflush(stdin);
        printf("Digite seu sexo: \n1- Homem  \n0-Mulher\n\nDigite sua opcao: ");
        scanf("%d", &sexo);
            if(sexo==1)
            {
                mas++;
            }else
            {
                fem++;
            }
    }
    printf("\nNumero de mulheres: %d", fem);
    printf("\nNumero de homens: %d", mas);
    return 0;
}
