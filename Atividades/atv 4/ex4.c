#include <stdio.h>

int nota_media(int nota){
    char conceito;
    if(nota<=49){
        conceito = 'D';
    }
    if(nota>=50 && nota<=69){
        conceito = 'C';
    }
    if(nota>=70 && nota<=89){
        conceito = 'B';
    }
    if(nota>=90){
        conceito = 'A';
    }
    return conceito;
}
int main(){
    int nota_m;
    char cond;
    do{
        printf("Digite a nota media do aluno = ");
        scanf("%i", &nota_m);
        printf("Conceito = %c", nota_media(nota_m));
        printf("\nDeseja repetir a operacao? (digite s para sim) = \n");
        scanf(" %c", &cond);
    }while(cond == 's');
    return 0;

}
