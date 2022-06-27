#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salm, sal;
    salm = 622;

    printf("Insira o valor do salario\n");
    scanf("%f", &sal);

    printf("\nSeu salario e equivalente a %.2f salario\"os\" minimo\"os\"\n", sal/salm);
    return 0;

}
