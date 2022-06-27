#include <stdio.h>
#include <math.h>

int main()
{
    char nome;
    float idade, peso;

    printf("Digite a primeira letra do seu nome = ");
    scanf("%c", &nome);
    printf("Digite sua idade = ");
    scanf("%f", &idade);
    printf("Digite seu peso = ");
    scanf("%f", &peso);

    if(peso>50 && (idade>=18 && idade<=67))
    {
        printf("Esta apto para doar sangue");
    }
    else
    {
        printf("Nao esta apto para doar sangue");
    }
    return 0;
}
