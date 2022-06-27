#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_L 3
#define NUM_C 6

void adc_aleatorio(int matriz[][NUM_C]);
void imprime_matriz(int matriz[][NUM_C]);
void multiplica_elementos(int matriz[][NUM_C]);

int main(){
    int matriz[NUM_L][NUM_C];
    adc_aleatorio(matriz);
    printf("Matriz: \n\n");
    imprime_matriz(matriz);
    multiplica_elementos(matriz);
    printf("\nMatriz apos alteracao:\n\n");
    imprime_matriz(matriz);
    return 0;
}

void adc_aleatorio(int matriz[][NUM_C]){
    int max=10;
    srand(time(0));
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            matriz[i][j] = rand()%max;
        }
    }
}

void imprime_matriz(int matriz[][NUM_C]){
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplica_elementos(int matriz[][NUM_C]){
    int num;
    printf("\nDigite o valor p/ multiplicar pelos elementos da matriz = ");
    scanf("%i", &num);
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            matriz[i][j]=(matriz[i][j])*num;
        }
    }
}

