#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100
#define TIME 11

typedef struct{
    int camisa;
    char nome[TAM];
    float peso;
    float altura;
}Jogador;

void cadastra_jogador(Jogador P[], int qtd);
void exibe_jogador(Jogador P[], int qtd);
void mais_pesado(Jogador P[]);
void mais_baixo (Jogador P[]);

int main(){
    Jogador P[TIME], pesado, baixo;
    cadastra_jogador(P, TIME);
    printf("\n\n-----------------\nDados Cadastrados\n-----------------\n\n");
    exibe_jogador(P, TIME);
    mais_pesado(P);
    mais_baixo(P);
    return 0;
}

void cadastra_jogador (Jogador P[], int qtd){
   printf("\n*********************\nCadastro de Jogadores\n*********************\n");
   for(int i=0; i<qtd; i++){
        printf("\n\n**********\nJogador %i\n**********\n\n", i+1);
        printf("Nome = ");
        fflush(stdin);
        gets(P[i].nome);
        printf("Num. Camisa = ");
        scanf("%i", &P[i].camisa);
        printf("Peso = ");
        scanf("%f", &P[i].peso);
        printf("Altura = ");
        scanf("%f", &P[i].altura);
   }
}

void exibe_jogador (Jogador P[], int qtd){
    for(int i=0; i<qtd; i++){
        printf("\n### Dados do Jogador %i ###\n", i+1);
        printf("Nome = %s - Camisa: %i", P[i].nome, P[i].camisa);
        printf("\nPeso: %.2f - Altura: %.2f\n\n", P[i].peso, P[i].altura);
    }
}

void mais_pesado(Jogador P[]){
    int i, posi_pes;
    int pes = 0;
    for(i=0; i<TIME; i++){
        if(P[i].peso > pes){
            pes = P[i].peso;
            posi_pes = i;
        }
    }
    printf("\n * Num. de Camisa do mais Pesado - %i", P[posi_pes].camisa);
}

void mais_baixo(Jogador P[]){
    int i, posi_baix;
    int baix = 9999999;
    for(i=0; i<TIME; i++){
        if(P[i].altura < baix){
            baix = P[i].altura;
            posi_baix = i;
        }
    }
    printf("\n\n * Inicial do Mais Baixo - %c\n\n", P[posi_baix].nome[0]);
}


