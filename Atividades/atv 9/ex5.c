#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TAM_NOME 100

typedef struct{
    char nome[TAM_NOME];
    char esporte[TAM_NOME];
    int idade;
    float altura;
}Atleta;

void cadastra_atleta(Atleta *atleta, int num);
void exibe_dados(Atleta *atleta, int num);
void exibe_atleta(Atleta a);
void mais_alto(Atleta *atleta, int num);
void mais_velho(Atleta *atleta, int num);

int main(){
    Atleta *atleta;
    int num;
    printf("Digite a quantidade de atletas = ");
    scanf("%i", &num);
    atleta = (Atleta*)malloc(num * sizeof(Atleta));
    cadastra_atleta(atleta, num);
    exibe_dados(atleta, num);
    printf("\n\n ### Mais Velho ###\n\n");
    mais_velho(atleta, num);
    printf("\n\n ### Mais Alto ###\n\n");
    mais_alto(atleta, num);
    free(atleta);
    return 0;
}
void cadastra_atleta(Atleta *atleta, int num){
    for(int i=0; i<num; i++){
        printf("\n\n********\nAtleta %i\n********\n\n", i+1);
        printf("Nome = ");
        getchar();
        fgets(atleta[i].nome, 50, stdin);
        printf("Esporte = ");
        fgets(atleta[i].esporte, 50, stdin);
        printf("Idade = ");
        scanf("%i", &atleta[i].idade);
        printf("Altura = ");
        scanf("%f", &atleta[i].altura);
    }
}

void exibe_dados(Atleta *atleta, int num){
    printf("\n\n*****************\nDados Cadastrados\n*****************\n\n");
    for(int i=0; i<num; i++){
        printf(" **** Atleta %i **** \n\n", i+1);
        printf("Nome = %s", atleta[i].nome);
        printf("Esporte = %s", atleta[i].esporte);
        printf("Idade = %i\n", atleta[i].idade);
        printf("Altura = %.2f\n\n", atleta[i].altura);

    }
}

void exibe_atleta(Atleta a){
    printf(" - Nome = %s", a.nome);
    printf(" - Esporte = %s", a.esporte);
    printf(" - Idade = %i\n", a.idade);
    printf(" - Altura = %.2f\n\n", a.altura);
}

void mais_alto(Atleta *atleta, int num){
    int i, posi_alto;
    float alto=0;
    for(i=0; i<num; i++){
        if(atleta[i].altura > alto){
        alto = atleta[i].altura;
        posi_alto = i;
        }
    }
    exibe_atleta(atleta[posi_alto]);
}

void mais_velho(Atleta *atleta, int num){
    int i, vei=0, posi_vei;
    for(i=0; i<num; i++){
        if(atleta[i].idade > vei){
        vei = atleta[i].idade;
        posi_vei = i;
        }
    }
    exibe_atleta(atleta[posi_vei]);
}
