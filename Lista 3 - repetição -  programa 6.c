#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    float km, met;
    printf("Voce quer converter o que?\n1 -Km/h em m/s\n2 -m/s em Km/h\n0 -Fechar o programa\nDigite: ");
    scanf("%d", opc);
    switch (opc)
    {
    case 1:
            printf("Digite sua kilometragem: ");
            scanf("%f", &km);
            printf("\nSua kilometragem em m/s fica: %.2f m/s", (km/3.6));
         break;
    case 2:
            printf("Digite sua metragem: ");
            scanf("%f", &met);
            printf("\nSua metragem em km/h fica: %.2f km/h", (met*3.6));
         break;
    case 0:
        break;
    default:
            printf("NAO ENTENDO SEU COMANDO!");
    }
    return 0;
}
