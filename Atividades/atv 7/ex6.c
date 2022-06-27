#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_L 3
#define NUM_C 4

void adc_aleatorio(int matriz[][NUM_C]);
void imprime_matriz(int matriz[][NUM_C]);
void soma_elementos(int matriz[][NUM_C]);
void multiplica_elementos(int matriz[][NUM_C]);

int main(){
    int matriz[NUM_L][NUM_C];
    adc_aleatorio(matriz);
    imprime_matriz(matriz);
    soma_elementos(matriz);
    multiplica_elementos(matriz);
    return 0;
}

void adc_aleatorio(int matriz[][NUM_C]){
    int max=10;
    srand(time(0));
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            matriz[i][j] = rand()%max+1;
        }
    }
}

void imprime_matriz(int matriz[][NUM_C]){
    printf("Matriz: \n\n");
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void soma_elementos(int matriz[][NUM_C]){
    int soma=0;
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            soma+=matriz[i][j];
        }
    }
    printf("\nA soma dos elementos eh igual a = %i\n", soma);
}

void multiplica_elementos(int matriz[][NUM_C]){
    int mult=1;
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            mult*=matriz[i][j];
        }
    }
    printf("\nA multiplicacao dos elementos eh igual a = %i\n", mult);
}

