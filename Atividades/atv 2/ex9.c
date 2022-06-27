#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    printf("Digite o valor de X = ");
    scanf("%i", &x);
    printf("Digite o valor de Y = ");
    scanf("%i", &y);

    if(x>0 && y>0)
    {
        printf("O par ordenado pertence ao PRIMEIRO quadrante");
    }
    else
    {
        if(x<0 && y<0)
        {
            printf("O par ordenado pertence ao TERCEIRO quadrante");
        }
        else
        {
            if(x>0 && y<0)
            {
                printf("O par ordenado pertence ao QUARTO quadrante");
            }
            else
            {
                if(x<0 && y>0)
                {
                    printf("O par ordenado pertence ao SEGUNDO quadrante");
                }
            }
        }
    }
    return 0;
}
