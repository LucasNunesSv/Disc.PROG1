#include <stdio.h>
#include <math.h>

int main()
{
    int cod;
    float sal;
    printf("Digite o codigo do cargo = ");
    scanf("%i", &cod);
    printf("Digite o valor do salario = ");
    scanf("%f", &sal);

    switch(cod)
    {
        case 1: printf("Novo salario dos tecnicos = %.2f", sal+(sal/2));
            break;
        case 2: printf("Novo salario dos gerentes = %.2f", sal+(sal*30/100));
            break;
        case 3: printf("Novo salario dos demais funcionarios = %.2f", sal+(sal*20/100));
            break;
        default: printf("\a\n * Codigo invalido * \n");
    }
    return 0;
}
