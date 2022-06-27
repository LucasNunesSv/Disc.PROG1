#include <stdio.h>
#define TAM 10

void le_vetor(int vetor[], int tam);

int main(){
    int vetor1[TAM], vetor2[TAM], vetor3[TAM];
    int i;
    printf("Vetor 1 = \n");
    le_vetor(vetor1, TAM);
    printf("\nVetor 2 = \n");
    le_vetor(vetor2, TAM);
    for(i=0; i<TAM; i++){
        vetor3[i] = vetor1[i]*vetor2[i];
    }
    printf("\nResultados armazenados no vetor 3 =\n");
    for(i=0; i<TAM; i++){
        printf("%i ", vetor3[i]);
    }
    printf("\n");
    return 0;
}

void le_vetor(int vetor[], int tam){
    int i;
    for(i=0; i<TAM; i++){
        printf("Digite o valor do indice %i = ", i);
        scanf("%i", &vetor[i]);
    }
}
