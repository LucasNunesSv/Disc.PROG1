#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal, maior=0;

    do{
        printf("\nDigite o valor do salario do funcionario\nPara sair digite -1\n= ");
        scanf("%f", &sal);
        if(sal > maior){
            maior = sal;
        }
    } while(sal != -1);
    printf("\nO maior salario digitado eh = %.2f\n", maior);

    return 0;
}
