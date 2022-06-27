#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


void operacao_sobre_vetores(int *a, int *b, int qtd);
void preenche_vetor(int *vet, int qtd);
void exibe_vetor(int *vet, int qtd);

int main(){
    int *a = NULL, *b = NULL, qtd;
    int *ptr_veta, *ptr_vetb;

    printf("Digite a quantidade de elementos do vetor = ");
    scanf("%i", &qtd);

    a = (int*)malloc(qtd * sizeof(int));
    b = (int*)malloc(qtd * sizeof(int));

    if (a == NULL){
        printf ("Nao foi possivel alocar a memoria!\n");
        return -1;
    }
    if (b == NULL){
        printf ("Nao foi possivel alocar a memoria!\n");
        return -1;
    }
    printf("Vetor A = \n");
    preenche_vetor(a, qtd);
    printf("\nVetor B = \n");
    preenche_vetor(b, qtd);

    ptr_veta = a;
    ptr_vetb = b;

    printf("A = ");
    exibe_vetor(a, qtd);
    printf("\nB = ");
    exibe_vetor(b, qtd);

    operacao_sobre_vetores(a, b, qtd);

    free(a);
    free(b);
    return 0;
}

void operacao_sobre_vetores(int *a, int *b, int qtd){
    for(int i=0; i<qtd; i++){
        if(a[i] % 2 == 0){
            a[i] = a[i]+10;
        }
        if(b[i] % 2 != 0){
            b[i] = b[i]-15;
        }
    }
}

void preenche_vetor(int *vet, int qtd){
    for(int i=0; i<qtd; i++){
        printf("Valor da posicao %i", i);
        scanf("%i", &vet[i]);
    }

void exibe_vetor(int *vet, int qtd){
    printf("[");
    for(int i=0; i<qtd; i++){
        printf("%i - ", vet[i]);
    }
    printf("]");
}


