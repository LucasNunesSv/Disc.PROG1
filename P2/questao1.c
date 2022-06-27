#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TAM 50

int main(){
    int cod[5], qtd[5];
    int cod1, qtd1;
    int liv, cod2, maior=0, posi, cod_m;
    float qtd_100=0, total=0;
    for(int i=0; i<5; i++){
        printf("Digite o codigo do produto %i = ", i+1);
        scanf("%i", &cod1);
        cod[i] = cod1;
        printf("Digite a quantidade do produto %i = ", i+1);
        scanf("%i", &qtd1);
        qtd[i] = qtd1;
        printf("\n");
    }
    for(int i=0; i<5; i++){
        if(qtd[i]<10){
            liv = qtd[i];
        }
    }
    printf("\nQuantidade de livros com estoque abaixo de 10 = %i\n", liv);
    printf("\nCodigo dos livros com estoque entre 50 e 100 = ");
    for(int i=0; i<5; i++){
        if(qtd[i]>=50 && qtd[i]<=100){
            printf("%i - ", cod[i]);
        }
        total+=qtd[i];
        if(qtd[i]>100){
            qtd_100+=qtd[i];
        }
    }
    printf("\n\nMedia da quantidade de livros com estoque superior a 100 = %.2f", qtd_100/total);
    for(int i=0; i<5; i++){
        if(qtd[i]>maior){
            maior = qtd[i];
            posi = i;
            cod_m = cod[i];
        }
    }
    printf("\n\nInformacoes do objeto com maior estoque = \n* codigo: %i\n* quantidade: %i\n* indice no vetor: %i\n\n", cod_m, maior, posi);
    return 0;
}
