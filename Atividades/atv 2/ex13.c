#include <stdio.h>
#include <math.h>

int main()
{
    float nota;
    printf("Digite a nota do aluno = ");
    scanf("%f", &nota);

    if(nota<=10 && nota>=9)
    {
        printf("Conceito = A");
    }
    else
    {
        if(nota<=8.9 && nota>=7)
        {
            printf("Conceito = B");
        }
        else
        {
            if(nota<=6.9 && nota>=5)
            {
                printf("Conceito = C");
            }
            else
            {
                if(nota<5)
                {
                    printf("Conceito = D");
                }
                else
                {
                    if(nota>10 || nota<0)
                    {
                        printf("\a\n * Nota nvalida * \n");
                    }
                }
            }
        }
    }

    return 0;
}
