#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Digite o valor do lado A = ");
    scanf("%i", &a);
    printf("Digite o valor do lado B = ");
    scanf("%i", &b);
    printf("Digite o valor do lado C = ");
    scanf("%i", &c);

    if(a==b && a==c && b==c)
    {
        printf("O triagulo eh equilatero");
    }
    else
    {
        if(a!=b && (b==c || a==c))
        {
            printf("O triangulo eh isoceles");
        }
        else
        {
            if(b!=c && (a==b || a==c))
            {
                printf("O triangulo eh isoceles");
            }
            else
            {
                if(a!=c && (a==b || b==c))
                {
                    printf("O triangulo eh isoceles");
                }
                else
                {
                    if(a!=b && b!=c && a!=c)
                    {
                        printf("O triangulo eh escaleno");
                    }
                }
            }
        }
    }
    return 0;
}
