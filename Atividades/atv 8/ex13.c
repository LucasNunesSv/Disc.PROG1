#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, *array, i;
    do{
        printf("Digite o tamanho do array - ");
        scanf("%i", &N);
        if(N < 0){
            printf(" ! Numero invalido !\n\n");
        }
    }while(N < 0);
    array = (int*)malloc(N * sizeof(int));
    printf("\n");
    for(i=0; i<N; i++){
        do{
           printf("Posicao %i - ", i);
           scanf("%i", &array[i]);
           if(array[i] < 1){
            printf(" ! Valor invalido ! \n   Digite Novamente\n\n");
           }
        }while(array[i] < 1);
    }
    printf("\n");
    for(i=0; i<N; i++){
        printf("%i - ", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}
