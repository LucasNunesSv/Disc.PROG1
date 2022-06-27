#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_L 4
#define NUM_C 4

void adc_aleatorio(int matriz[][NUM_C]);
void imprime_matriz(int matriz[][NUM_C]);
void multiplica_elementos(int matriz[][NUM_C]);
void procura_elemento(int matriz[][NUM_C]);

int main(){
    int matriz[NUM_L][NUM_C];
    adc_aleatorio(matriz);
    printf("Matriz: \n\n");
    imprime_matriz(matriz);
    procura_elemento(matriz);
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

void procura_elemento(int matriz[][NUM_C]){
    int maior=0, menor=999, p1ma, p2ma, p1me, p2me;
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            if(matriz[i][j]>maior){
                maior = matriz[i][j];
                p1ma = i;
                p2ma = j;
            }
            if(matriz[i][j]<menor){
                menor = matriz[i][j];
                p1me = i;
                p2me = j;
            }
        }
    }
    printf("\nValor do maior elemento = %i\n", maior);
    printf("Posicao do maior elemento = (%i,%i)\n", p1ma, p2ma);
    printf("\nValor do menor elemento = %i\n", menor);
    printf("Posicao do menor elemento = (%i,%i)\n", p1me, p2me);
}
