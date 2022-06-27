#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, ab, ba;

    printf("Insira o valor de A\n");
    scanf("%i", &a);
    printf("Insira o valor de B\n");
    scanf("%i", &b);

    ab=a;
    ba=b;
    a=b;

    printf("Valor A1 = %i\nValor A2 = %i\nValor B1 = %i\nValor B2 = %i\n", ab, a, ba, ab);
    return 0;
}
