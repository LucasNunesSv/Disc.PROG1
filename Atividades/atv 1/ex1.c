#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;

    printf("Insira o numero desejado = ");
    scanf("%i", &num);

    printf("Numero sucessor  = %i\nNumero antecessor = %i\n", num+1, num-1);
    return 0;
}
