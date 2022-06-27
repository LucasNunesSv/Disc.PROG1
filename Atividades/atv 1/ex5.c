#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	//Declaração de variáveis
    float valor_a, valor_b, desc, saldo;

	//Caixa de inserção de dados
    printf("Insira o valor do produto\n");
    scanf("%f", &valor_a);
    printf("Insira a porcentagem de desconto\n");
    scanf("%f", &valor_b);

    desc = valor_a*valor_b/100;

	//Exibição dos valores com base na expressão atribuida à "desc"
    printf("O valor com desconto e %.2f\n", valor_a-desc);
    return 0;
}
