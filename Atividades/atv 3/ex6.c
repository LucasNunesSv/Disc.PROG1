#include <stdio.h>

int main()
{
    int num, pos=0, neg=0, cont_pos=0, cont_neg=0;
    float media=0, percent_p, percent_n;
    do{
        printf("Digite um numero\nDigite 0 para sair\n= ");
        scanf("%i", &num);
        if(num>0){
            pos=pos+num;
            cont_pos++;
        }
        if(num<0){
            neg=neg+num;
            cont_neg++;
        }
    }while(num!=0);

    media=(float)(pos+neg)/(cont_neg+cont_pos);
    printf("\nMedia geral = %.2f\n", media);
    printf("Numeros Positivos = %i\n", cont_pos);
    printf("Numeros Negativos = %i\n", cont_neg);
    percent_p=(cont_pos*100)/(cont_neg+cont_pos);
    printf("Porcentual de numeros positivos = %.2f%%\n", percent_p);
    percent_n=(cont_neg*100)/(cont_neg+cont_pos);
    printf("Porcentual de numeros negativos = %.2f%%", percent_n);
    return 0;
}
