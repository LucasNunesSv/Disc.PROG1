#include <stdio.h>
#include <math.h>

int main()
{
    float valor, soma;
    soma = 0;

    printf("Digite o valor do produto (0 ou - para sair) = ");
    scanf("%f", &valor);

    while(valor > 0){
        soma=soma+valor;
        printf("\nSoma parcial = %.2f\n", soma);
        printf("\nDigite o valor do produto (0 ou - para sair) = ");
        scanf("%f", &valor);
    }
        printf("\nO Valor total e = %.2f", soma);
    return 0;
}
