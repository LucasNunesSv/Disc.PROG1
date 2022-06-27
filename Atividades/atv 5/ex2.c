#include <stdio.h>
#define TAM 20


void le_vetor(int vetor[], int tam);
float calcula_media(int vetor[], int tam);

int main(){
    int vetor[TAM];
    int i, cont=0;
    float media;

    le_vetor(vetor, TAM);
    media = calcula_media(vetor, TAM);
    printf("\nmedia = %.2f", media);
    for(i=0; i<TAM; i++){
        if(vetor[i]<media){
            cont++;
        }
    }
    printf("\nQuantidade de numeros fora da media = %i\n", cont);
    return 0;
}

void le_vetor(int vetor[], int tam){
    int i;
    printf("Digite 20 numeros inteiros positivos = ");
    for(i=0; i<TAM; i++){
        printf("\n\nDigite o valor do indice %i = ", i);
        scanf("%i", &vetor[i]);
        while(vetor[i]<0){
            printf("\n - Numero invalido -\n Sao aceitos apenas numeros positivos");
            printf("\n\nDigite o valor do indice %i = ", i);
            scanf("%i", &vetor[i]);
        }
    }
}
float calcula_media(int vetor[], int tam){
    int i;
    float media, soma;
    for(i=0; i<TAM; i++){
        soma = soma + vetor[i];
    }
    media = soma/(float)tam;
    return media;
}
