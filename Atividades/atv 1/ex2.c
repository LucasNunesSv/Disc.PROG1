#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaração das variáveis
    int num_a, num_b;

    // Caixas para atribuir valor às variáveis
    printf("Digite o numero 1\n");
    scanf("%i", &num_a);

    printf("Digite o numero 2\n");
    scanf("%i", &num_b);

    // Impressão dos operadores e seus respectivos resultados
    printf("%i + %i = %i\n", num_a, num_b, num_a+num_b);
    printf("%i - %i = %i\n", num_a, num_b, num_a-num_b);
    printf("%i * %i = %i\n", num_a, num_b, num_a*num_b);
    printf("%i / %i = %i\n", num_a, num_b, num_a/num_b);
    return 0;
}
