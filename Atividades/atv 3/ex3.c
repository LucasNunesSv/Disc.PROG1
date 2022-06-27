#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, num, vezes=1, result;
    printf("Digite o numero desejado (n) = ");
    scanf("%i", &num);
    for(cont=0; cont<10; cont++){
        result = (vezes*num);
        printf("%i * %i = %i\n", vezes, num, result);
        vezes++;
    }
    printf("\n\aObrigado por usar o programa tabuada :)\n");
    return 0;
}
