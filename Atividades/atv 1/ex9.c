#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int per;
    float mont, jur;

    //Caixa de inserção de dados
    printf("Digite o montante\n");
    scanf("%f", &mont);
    printf("Digite o periodo\n");
    scanf("%i", &per);
    printf("Digite a porcentagem de juros\n");
    scanf("%f", &jur);

    //Exibição dos valores efetuando as operações com variáveis
    printf("Montante inicial = %.2f\nMontante final = %.2f\nValor do juros obtido = %.2f",
           mont, mont+(mont*jur/100)*per, (mont*jur/100)*per);
           return 0;
}
