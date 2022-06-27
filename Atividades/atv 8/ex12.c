#include <stdio.h>
#include <stdlib.h>

int * soma_array(int *array1, int *array2, int tam);

int main(){
    int *array1=NULL, *array2=NULL, i, tam;
    int *soma;
    do{
        printf("digite o tamanho dos vetores = ");
        scanf("%i", &tam);
        if(tam <= 0){
            printf(" ! Numero invalido ! \n\n");
        }
    }while(tam <= 0);
    array1 = (int*)malloc(tam * sizeof(int));
    array2 = (int*)malloc(tam * sizeof(int));
    printf("\n");
    for(i=0; i<tam; i++){
        printf("Valor da posicao %i do vetor 1 - ", i);
        scanf("%i", &array1[i]);
        printf("Valor da posicao %i do vetor 2 - ", i);
        scanf("%i", &array2[i]);
        printf("\n");
    }
    soma = soma_array(array1, array2, tam);
    printf("\nArray da soma: ");
    for(i=0; i<tam; i++){
        printf("%i - ", soma[i]);
    }
    printf("\n");
    free(array1);
    free(array2);
    free(soma);
    return 0;
}

int * soma_array(int *array1, int *array2, int tam){
    int *soma = NULL, i;
    soma = (int*)malloc(tam * sizeof(int));
    for(i=0; i<tam; i++){
        soma[i] = array1[i] + array2[i];
    }
    return soma;
}
