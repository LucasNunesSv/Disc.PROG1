#include <stdio.h>

int soma_intervalo(int n1, int n2){
    int i, soma=0;
    if(n1<=n2){
        for(i=n1; i<=n2; i++){
            soma = soma + i;
        }
    }
    if(n1>n2){
        for(i=n2; i<=n1; i++){
            soma = soma + i;
        }
    }
    return soma;
}
int main()
{
    int num1, num2, result;
    printf("Digite o numero 1 = ");
    scanf("%i", &num1);
    printf("Digite o numero 2 = ");
    scanf("%i", &num2);
    result = soma_intervalo(num1, num2);
    printf("A Soma do intervalo de %i a %i = %i",
    num1, num2, result);
    return 0;
}
