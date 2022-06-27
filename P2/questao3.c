#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define LIN 5
#define COL 5

void adc_aleatorio(int mat[LIN][COL]);
void imprime_matriz(int matriz[LIN][COL]);
int soma_linha(int mat[LIN][COL]);
int soma_coluna(int mat[LIN][COL]);


int main(){
    int mat[LIN][COL];
    int p_linha, p_coluna;
    adc_aleatorio(mat);
    imprime_matriz(mat);
    p_linha = soma_linha(mat);
    printf("\n\nPosicao da linha de menor soma = %i\n\n", p_linha);
    p_coluna = soma_coluna(mat);
    printf("\n\nPosicao da coluna de maior soma = %i\n\n", p_coluna);
    return 0;
}

void adc_aleatorio(int mat[LIN][COL]){
    int max=10;
    srand(time(0));
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            mat[i][j] = rand()%max+1;
        }
    }
}

void imprime_matriz(int matriz[LIN][COL]){
    printf("Matriz: \n\n");
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

int soma_linha(int mat[LIN][COL]){
    int i, j, soma=0, menor=99999, p;
    for(i=0; i<LIN; i++){
        soma = 0;
        for(j=0; j<COL; j++){
            soma += mat[i][j];
        }
        if(soma<menor){
            menor = soma;
            p = i;
        }
    }
    return p;
}

int soma_coluna(int mat[LIN][COL]){
    int i, j, soma=0, maior=0, p;
    for(i=0; i<LIN; i++){
        soma = 0;
        for(j=0; j<COL; j++){
            soma += mat[j][i];
        }
        if(soma>maior){
            maior = soma;
            p = i;
        }
    }
    return p;
}


