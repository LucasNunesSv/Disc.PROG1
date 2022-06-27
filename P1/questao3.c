#include <stdio.h>
#include <math.h>

int main()
{
    int cod;
    char cond;
    float sal, op=0, sup=0, dir=0, cont_op=0, cont_sup=0, cont_dir=0, media_o=0, media_s=0, media_d=0;
    do{
        printf("\nDigite o codigo do funcionario = ");
        scanf("%i", &cod);
        printf("\nDigite salario = ");
        scanf("%f", &sal);
        printf("\nPara repetir a operacao digite s = ");
        scanf(" %c", &cond);
        switch(cod){
            case 1: op=op+sal; cont_op++;
                break;
            case 2: sup=sup+sal; cont_sup++;
                break;
            case 3: dir=dir+sal; cont_dir++;
                break;
        }
    }while(cond=='s');
    media_s = sup/cont_sup;
    media_o = op/cont_op;
    media_d = dir/cont_dir;
    printf("\nMedia dos operarios = %.2f", media_o);
    printf("\nMedia dos supervisores = %.2f", media_s);
    printf("\nMedia dos diretores = %.2f\n", media_d);

    return 0;
}
