#include <stdio.h>
#include <stdlib.h>

int main()

{
	//Declaração das variáveis
    float c, f;

	//Caixa de inserção de dados
    printf("Insira a temperatura em C\n");
    scanf("%f", &c);

    f = (9*c+160)/5;

	//Exibição dos resultados com base na expressão atribuida à variavel "f"
    printf("A temperatura em F e = %.2f\n", f);
    return 0;
}
