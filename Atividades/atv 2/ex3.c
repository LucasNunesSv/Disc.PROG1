#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;
    printf("Insira o valor de A = \n");
    scanf("%f", &a);
    printf("Insira o valor de B = \n");
    scanf("%f", &b);
    printf("Insira o valor de C = \n");
    scanf("%f", &c);

    delta = (pow(b, 2)-4*a*c);

    if(delta<0)
    {
        printf("Nao existem raizes reais");
    }
    else
    {
        if(delta==0)
        {
             printf("Existe apenas uma raiz\nX1 = %.2f", ((-b)/2*a));
        }
        else
        {
            if(delta>0)
            {
                printf("Existem duas raizes para esta equacao\n");
                printf("X1 = %.2f", ((-b+sqrt(delta))/2*a));
                printf("X2 = %.2f", ((-b-sqrt(delta))/2*a));
            }
        }
    }
return 0;
}
