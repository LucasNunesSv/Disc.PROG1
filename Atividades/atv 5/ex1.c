#include <stdio.h>
#define TAM 20

void le_vetor(int vetor[], int tam);
int conta_impar(int vetor[], int tam);

int main(){
    int vetor[TAM];
    int qtd_i, qtd_p;

    le_vetor(vetor, TAM);
    qtd_i = conta_impar(vetor, TAM);
    qtd_p = abs(qtd_i-TAM);
    printf("Quantidade de Impares = %i\n", qtd_i);
    printf("Quantidade de Pares = %i", qtd_p);

    return 0;
}

void le_vetor(int vetor[], int tam){
    int i;
    for(i=0; i<TAM; i++){
        printf("Digite o valor do indice %i = ", i);
        scanf("%i", &vetor[i]);
    }
    printf("\nElementos do vetor = ");
    for(i=0; i<TAM; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

int conta_impar(int vetor[], int tam){
    int i, cont_i;
    for(i=0; i<TAM; i++){
        if(vetor[i]%2 != 0){
            cont_i++;
        }
    }
    return cont_i;
}
