#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float desp, gorg;

    printf("Digite o valor da despesa\n");
    scanf("%f", &desp);

    gorg = desp*10/100;

    printf("Valor da gorgeta = %.2f\n", gorg);
    printf("Valor Total a ser pago = %.2f\n", desp+gorg);
    return 0;

}
