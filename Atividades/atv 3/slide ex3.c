#include <stdio.h>

int main()
{
    int times, cont, vit, emp, der, total;

    printf("Digite o numero de times = ");
    scanf("%i", &times);
    cont=0;
    printf("Para cada time, digite o numero de vitorias, empates e derrotas");
    while(cont < times){
        printf("\nTime %i", cont + 1);
        scanf("%i%i%i",&vit,&emp,&der);
        total=(3*vit)+(1*emp);
        printf("O total de pontos e = %i", total);
        cont++;
    }
    return 0;
}
