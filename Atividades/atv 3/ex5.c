#include <stdio.h>

int main()
{
    int idade, cont;
    float peso, soma_peso=0;
    char cond;

    do{
        printf("Digite sua Idade = \n");
        scanf("%i", &idade);
        if(idade > 30){
            printf("\nDigite o seu Peso = \n");
            scanf("%f", &peso);
            soma_peso = soma_peso+peso;
        }
        else{
            printf("\nO calculo eh permitido apenas para pessoas acima de 30 anos\n");
        }
        printf("\nDeseja repetir a operacao?\n\nDigite 's' para sim\nPara sair digite 'n'\n=");
        scanf(" %c", &cond);

    } while((cond == 's') || (cond == 'S'));

    printf("\nPeso total das pessoas acima de 30 anos cadastradas = %.2f\n", soma_peso );
    return 0;
}
