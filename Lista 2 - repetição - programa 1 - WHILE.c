#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cont, num1, num2, soma=0;
    printf("Digite o primeiro numero do intervalo: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero do intervalo: ");
    scanf("%d", &num2);
    cont=num1;
    while(cont<=num2)
    {
      if (cont%2 != 0)
      {
       soma=soma+cont;
      }
      cont++;
    }
    printf("\nSoma: %d", soma);
    return 0;
}
