#include <stdio.h>
#include <math.h>

int main()
{
    float hora, min, min_h;
    printf("Informe as horas = ");
    scanf("%f", &hora);
    printf("Informe os minutos = ");
    scanf("%f", &min);

    min_h = hora*60;

    printf("Desde o inicio do dia ate a hora informada se passaram %.2f minutos", min_h+min);

    return 0;
}
