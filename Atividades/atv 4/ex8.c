#include <stdio.h>

void fibonacci(int num){
    int i, soma=1;
    if(num>=3){
        printf("-> 0 -> 1 -> 1 ");
        for(i=3; i<num; i++){
            soma = soma + soma;
            printf("-> %i ", soma);
        }
    }
    switch(num){
        case 1: printf("-> 0");
            break;
        case 2: printf("-> 0 -> 1");
            break;
    }
}
int main()
{
    int numero;
    printf("Digite um numero ");
    scanf("%i", &numero);
    printf("\nSequencia Fibonacci ate %i = \n\n", numero);
    fibonacci(numero);
    printf("\n");
    return 0;
}
