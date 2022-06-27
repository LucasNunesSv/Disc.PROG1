#include <stdio.h>
#include <math.h>

int main()
{
    float raio, alt, pi;
    pi = 3.14159;
    printf("Digite o valor do raio da base = ");
    scanf("%f", &raio);
    printf("\nDigite o valor da altura da lata = ");
    scanf("%f", &alt);

    printf("\nO volume da lata de oleo eh = %.2f\n", pi*pow(raio, 2)*alt);

    return 0;
}
