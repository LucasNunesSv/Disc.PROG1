#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declara��o das vari�veis
    int num_a, num_b;

    // Caixas para atribuir valor �s vari�veis
    printf("Digite o numero 1\n");
    scanf("%i", &num_a);

    printf("Digite o numero 2\n");
    scanf("%i", &num_b);

    // Impress�o dos operadores e seus respectivos resultados
    printf("%i + %i = %i\n", num_a, num_b, num_a+num_b);
    printf("%i - %i = %i\n", num_a, num_b, num_a-num_b);
    printf("%i * %i = %i\n", num_a, num_b, num_a*num_b);
    printf("%i / %i = %i\n", num_a, num_b, num_a/num_b);
    return 0;
}
