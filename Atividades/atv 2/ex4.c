#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite o numero desejado = ");
    scanf("%i", &num);

    if (num>=0 && num<=10)
    {
        printf("O numero %i esta entre 0 e 10", num);
    }
    else
    {
        if(num>=10 && num<=100)
        {
            printf("O numero %i esta entre 10 e 100", num);
        }
        else
        {
            if(num>=100 && num<=1000)
            {
                printf("O numero %i esta entre 100 e 1000", num);
            }
            else
            {
                if(num>=1000 && num<=10000)
                {
                    printf("O numero %i esta entre 1000 e 10000", num);
                }
                else
                {
                    printf("O numero nao se encaixa em nenhum dos grupos");
                }
            }
        }
    }
    return 0;
}
