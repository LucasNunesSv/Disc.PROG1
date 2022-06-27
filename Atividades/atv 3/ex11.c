#include <stdio.h>

int main()
{
    float sal, fil, soma_sal=0, soma_fil=0, cont_sal=0, cont_fil=0, maior=0, menor=0,percentual;
    char cond;

    do{
        printf("Informe o salario\n");
        scanf("%f", &sal);
        printf("Informe o numero de filhos\n");
        scanf("%f", &fil);
        printf("Deseja repetir a operacao? S ou N = ");
        scanf(" %c", &cond);

        soma_sal = soma_sal+sal;
        cont_sal++;
        soma_fil = soma_fil+fil;
        cont_fil++;

        if(sal > maior){
            maior = sal;
        }
        if(sal <= 100){
            menor++;
        }
    } while(cond == 'S' || cond == 's');

    percentual = (menor * 100) / cont_sal;
    printf("\nMedia do salario = %.2f", soma_sal/cont_sal);
    printf("\nMedia do numero de filhos = %.2f", soma_fil/cont_fil);
    printf("\nMaior salario = %.2f\n", maior);
    printf("\nPercentual de pessoas com salario ate 100= %.2f\n", percentual);
    return 0;
}
