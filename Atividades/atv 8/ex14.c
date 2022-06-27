#include <stdio.h>
#include <stdlib.h>

float * aloca_vetor_float(int tam);
void exibe_vetor(float *array, int tam);

int main(){
    int tam;
    float *array;
    do{
        printf("digite o tamanho do vetor = ");
        scanf("%i", &tam);
        if(tam <= 0){
            printf(" ! Numero invalido ! \n\n");
        }
    }while(tam <= 0);
    array = aloca_vetor_float(tam);
    printf("\n");
    for(int i=0; i<tam; i++){
        printf("Posicao %i - ", i);
        scanf("%f", array + i);
    }
    printf("\n");
    exibe_vetor(array, tam);
    printf("\n");
    free(array);
    return 0;
}

float * aloca_vetor_float(int tam){
    int i;
    float *array;
    array = (int*)malloc(tam * sizeof(float));
    return array;

}

void exibe_vetor(float *array, int tam){
    for(int i=0; i<tam; i++){
        printf("%.2f - ", *array);
        array++;
    }
}


