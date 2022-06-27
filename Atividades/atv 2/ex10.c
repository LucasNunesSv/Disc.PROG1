#include <stdio.h>
#include <math.h>

int main()
{
    int numa, numb, soma;
    printf("Digite o valor do numero A = ");
    scanf("%i", &numa);
    printf("Digite o valor do numero B = ");
    scanf("%i", &numb);

    soma = numa+numb;

    if(soma<8)
    {
        printf("A media de A e B eh = %i\n", (numa+numb)/2);
    }
    else
    {
        if(soma==8)
        {
            printf("O produto de A e B eh = %i\n", numa*numb);
        }
        else
        {
            if(soma>8 && numa<=numb)
            {
                printf("A divisao de B por A eh = %i\n", numb/numa);
            }
            else
            {
                if(soma>8 && numb<=numa )
                {
                    printf("A divisao de A por B eh = %i\n", numa/numb);
                }
            }
        }
    }
    return 0;
}
