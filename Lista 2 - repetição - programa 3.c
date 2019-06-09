#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont=1, num, i;
    while(cont == 1)
        {
        printf("Digite um numero entre 10 e 25:");
        scanf("%d", &num);
        if(10<num && 25>num)
        {
            for(i=num;i>0;i--)
            {
                printf("\n%d\n", i);
                cont++;
            }
        }
        else{
            cont=1;
        }
    }
    return 0;
}
