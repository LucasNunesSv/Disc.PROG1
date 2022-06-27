#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, cont, num;
    printf("Digite um numero (n) = ");
    scanf("%i", &num);
    for(cont=0; cont<=num; cont++){
        soma=soma+cont;
    }
    printf("\nA soma de 0 ate %i = %i\n", num, soma);
    return 0;
}
