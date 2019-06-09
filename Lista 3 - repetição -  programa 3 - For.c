#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=0, cont;
    for (cont=1; cont<=100; cont++)
    {
        num=num+1000;
        printf("\nEtapa %d - %d", cont, num);
    }
    return 0;
}
