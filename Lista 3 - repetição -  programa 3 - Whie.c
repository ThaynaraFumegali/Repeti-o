#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cont=1, num=0;
   while (cont<=100)
   {
        num=num+1000;
        printf("\nEtapa %d - %d", cont, num);
        cont++;
   }
    return 0;
}
