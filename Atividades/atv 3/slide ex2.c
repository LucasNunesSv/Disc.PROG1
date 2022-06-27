#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, cont, maior, menor;

    cont=0;
    maior=0;
    menor=999999999999999;

    while(cont < 6){

        printf("Digite um numero = ");
        scanf("%i", &numero);
        cont++;

        if(numero > maior){
            maior = numero;
        }
        else{

           if(numero < menor){
                menor = numero;
            }
        }

    }

        printf("O maior numero e %i", maior);
        printf("O menor numero e %i", menor);

    return 0;
}
