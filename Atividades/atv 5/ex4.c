#include <stdio.h>
#include <math.h>
#define TAM 20

void le_vetor(int vetor[], int tam);
void percorre_imprime_vetor(int vetor[], int tam);

int main(){
    int vetor[TAM];
    le_vetor(vetor, TAM);
    percorre_imprime_vetor(vetor, TAM);
    return 0;
}
void le_vetor(int vetor[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Digite o valor da posicao %i = ", i);
        scanf("%i", &vetor[i]);
    }
}
void percorre_imprime_vetor(int vetor[], int tam){
    int i, maior=0, menor=9999999999, indc;
    for(i=0; i<tam; i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            indc=i;
        }
    }
    printf("\nMaior valor digitado = %i", maior);
    printf("\nIndice do maior valor = %i\n", indc);
    for(i=0; i<tam; i++){
        if(vetor[i]<menor){
            menor=vetor[i];
            indc=i;
        }
    }
    printf("\nMenor valor digitado = %i\n", menor);
    printf("Indice do menor valor = %i\n", indc);
}

