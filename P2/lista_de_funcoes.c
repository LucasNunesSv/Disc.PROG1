#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TAM 50
#define LIN 50
#define COL 50

// PREENCHE VETOR

void preenche_vetor(int vetor[]);
void preenche_vetor(int vetor[]){
    int i;
    for(i=0; i<TAM; i++){
        printf("Digite o valor da posicao %i", i);
        scanf("%i", vetor[i]);
    }
}

// IMPRIME VETOR

void imprime_vetor(int vetor[]);
void imprime_vetor(int vetor[]){
    int i;
    for(i=0; i<TAM; i++){
        printf("%i - ", vetor[i]);
    }
}

// CONTA PAR

int conta_par(int vetor[]);
int conta_par(int vetor[]){
    int i, cont_p=0;
    for(i=0; i<TAM; i++){
        if(vetor[i]%2 == 0){
            cont_p++;
        }
    }
    return cont_p;
}

// CONTA IMPAR

int conta_impar(int vetor[]);
int conta_impar(int vetor[]){
    int i, cont_i=0;
    for(i=0; i<TAM; i++){
        if(vetor[i]%2 != 0){
            cont_i++;
        }
    }
    return cont_i;
}

// TIRA ESPAÇO STRING

void tira_espaco(char str[]);
void tira_espaco(char str[]){
    int j=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

// PREENCHE MATRIZ

void preenche_matriz(int mat[LIN][COL]);
void preenche_matriz(int mat[LIN][COL]){
    int i, j;
    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Posicao (%i,%i)", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
}

// PREENCHE MATRIZ COM NMR ALEATORIO

void adc_aleatorio(int matriz[LIN][COL]);
void adc_aleatorio(int matriz[LIN][COL]){
    int max=10;
    srand(time(0));
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            matriz[i][j] = rand()%max+1;
        }
    }
}

// SOMA ELEMENTOS DE MATRIZ

void soma_elementos(int matriz[LIN][COL]);
void soma_elementos(int matriz[LIN][COL]){
    int soma=0;
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            soma+=matriz[i][j];
        }
    }
    printf("\nA soma dos elementos eh igual a = %i\n", soma);
}

// MULTIPLICA ELEMENTOS

void multiplica_elementos(int matriz[LIN][COL]);
void multiplica_elementos(int matriz[LIN][COL]){
    int mult=1;
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            mult*=matriz[i][j];
        }
    }
    printf("\nA multiplicacao dos elementos eh igual a = %i\n", mult);
}

// IMPRIME MATRIZ

void imprime_matriz(int matriz[LIN][COL]);
void imprime_matriz(int matriz[LIN][COL]){
    printf("Matriz: \n\n");
    for(int i=0; i<LIN; i++){
        for(int j=0; j<COL; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

//
