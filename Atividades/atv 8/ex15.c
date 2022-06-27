#include <stdio.h>
#include <stdlib.h>

int * multiplica_vetores(int *veta, int *vetb, int tam);
void exibe_vetor(int *vetor, int tam);

int main(){
    int *veta=NULL, *vetb=NULL, vetc=NULL, i, tam;
    do{
        printf("digite o tamanho dos vetores = ");
        scanf("%i", &tam);
        if(tam <= 0){
            printf(" ! Numero invalido ! \n\n");
        }
    }while(tam <= 0);
    veta = (int*)malloc(tam * sizeof(int));
    vetb = (int*)malloc(tam * sizeof(int));

    for(i=0; i<tam; i++){
        veta[i] = i+1;
        vetb[i] = i+2;
    }
    printf("\nVetor A = ");
    exibe_vetor(veta, tam);
    printf("\nVetor B = ");
    exibe_vetor(vetb, tam);
    vetc = multiplica_vetores(veta, vetb, tam);
    printf("\n\nVetor C (a x b) = ");
    exibe_vetor(vetc, tam);
    printf("\n\a");
    free(veta);
    free(vetb);
    free(vetc);
    return 0;
}

void exibe_vetor(int *vetor, int tam){
    for(int i=0; i<tam; i++){
        printf("%i - ", vetor[i]);
    }
}

int * multiplica_vetores(int *veta, int *vetb, int tam){
    int *vet=NULL;
    vet = (int*)malloc(tam * sizeof(int));
    for(int i=0; i<tam; i++){
        vet[i] = veta[i] * vetb[i];
    }
    return vet;
}

