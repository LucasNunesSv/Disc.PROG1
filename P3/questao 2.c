#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int busca_multiplos_no_vetor(int *vet, int qtd, int n);

int main(){
    int *vet, qtd, n, result;
    int *ptr_vet;

    printf("Digite a Quantidade de elementos do vetor = ");
    scanf("%i", &qtd);
    printf("\nDigite um numero para buscar os multiplos dele (N) = ");
    scanf("%i", &n);

    vet = (int*)malloc(qtd * sizeof(int));

    for(int i=0; i<qtd; i++){ //para preencher o vetor
        vet[i] = i+1;
    }

    result = busca_multiplos_no_vetor(vet, qtd, n);

    printf("\n\nO Vetor possui %i numeros multiplos de %i\n\n", result, n);

    free(vet);
    return 0;
}

int busca_multiplos_no_vetor(int *vet, int qtd, int n){
    int multp = 0;
    for(int i=0; i<qtd; i++){
        if(*vet % n == 0){
            multp++;
        }
        vet++;
    }
    return multp;
}
