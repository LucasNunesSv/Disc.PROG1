#include <stdio.h>
#include <math.h>

int main()
{
    float n, x;
    float operacao, somatorio=0;
    printf("Digite o valor de N = ");
    scanf("%f", &n);
    printf("Digite o valor de X = ");
    scanf("%f", &x);
    if((n<0)||(x<0)){
        printf("\nValor invalido\n");
        return 0;
    }else{
        for(int i=1; i<=n; i++){
        somatorio += ((2*pow(x, i)) - (3*1*x) + (2*n)) / (i+5);
        }
        operacao = (pow(n,2))*(somatorio);
        printf("\nResposta = %.2f\n", operacao);
        return 0;
    }
}
