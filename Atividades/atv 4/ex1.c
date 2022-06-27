#include <stdio.h>

int idade_em_dia(int anos, int meses, int dias){
    int anos_d, meses_d;
    anos_d = anos * 365;
    meses_d = meses * 30;
    return(anos_d+meses_d+dias);
}
int main()
{
    int anos, meses, dias, total;
    printf("Digite a idade (ANOS/MESES/DIAS)\n");
    scanf("%i%i%i", &anos, &meses, &dias);
    total = idade_em_dia(anos, meses, dias);
    printf("\n%i ano(s), %i mes(es), e %i dia(s), equivalem a %i dias\n",
           anos, meses, dias, total);
    return 0;
}
