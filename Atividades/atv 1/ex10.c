#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variáveis
    int horas;
    float min_a, min_b;

    printf("Digite o horario atual\nHoras: ");
    scanf("%i", &horas);
    printf("Minutos: ");
    scanf("%f", &min_a);

    min_b = horas*60;

    printf("De %i:%.0f ate o atual momento se passaram %.2f minutos\n", horas, min_a, (min_b+min_a));
    return 0;
}
