#include <stdio.h>

int main()
{
    int num, par=0, cont_par=0, impar=0, cont_impar=0;
    float mediap, mediag;

    do{
        printf("Digite um numero = \nDigite 0 para sair\n=");
        scanf("%i", &num);
        if(num%2==0){
            par=par+num;
            cont_par++;
        }
        else{
            impar=impar+num;
            cont_impar++;
        }
    }while(num!=0);
    cont_par=cont_par-1;
    printf("\nQuantidade de Pares = %i\n", cont_par);
    printf("Quantidade de Impares = %i\n", cont_impar);
    mediap = (float)par/cont_par;
    printf("Media de Pares = %.2f\n", mediap);
    mediag = (float)(par+impar)/(cont_impar+cont_par);
    printf("Media geral = %.2f\n", mediag);
    return 0;
}
