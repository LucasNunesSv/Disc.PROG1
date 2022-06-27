#include <stdio.h>
#include <stdlib.h>

#define TAM 10

void imprime(int vetor[]);

int main(){
    int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("\n");
    imprime(vetor);
    printf("\n");
    return 0;
}

void imprime(int vetor[]){
    int i;
    int *ptr;
    ptr = vetor;
    for(i=0; i<TAM; i++){
        printf("%i - ", *ptr);
        ptr++;
    }
}
