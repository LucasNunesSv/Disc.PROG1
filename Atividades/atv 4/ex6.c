#include <stdio.h>

int contaimpar(int n1, int n2){
    int cont, i;
    if(n1<=n2){
        for(i=n1; i<=n2+1; i++){
            if((i%2)==0){
                cont++;
            }
        }
    }
    if(n1>n2){
        for(i=n2; i<=n1+1; i++){
            if((i%2)==0){
                cont++;
            }
        }
    }
    return cont;
}

int main()
{
    int num1, num2, result;
    printf("Digite o primeiro numero = ");
    scanf("%i", &num1);
    printf("Digite o segundo numero = ");
    scanf("%i", &num2);
    result = contaimpar(num1, num2);
    printf("O intervalo de %i a %i possui = %i numeros impares",
    num1, num2, result);
    return 0;
}
