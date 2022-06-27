#include <stdio.h>

#define NUM_ALUNOS 2
#define NUM_COLUNAS 4

void le_notas(float controle[][NUM_COLUNAS]){
    for(int i = 0; i < NUM_ALUNOS; i++){
        for(int j=0; j < NUM_COLUNAS-1; j++){
            printf("Digite a nota %d do aluno %d: ", (j+1), (i+1));
            scanf("%f", &controle[i][j]);
        }
        printf("\n");
    }
}

void calcula_media(float controle[][NUM_COLUNAS]){
    for(int i =0; i < NUM_ALUNOS; i++){
        float soma=0;
        for(int j=0; j < NUM_COLUNAS-1; j++){
            soma += controle[i][j];
        }
        controle[i][NUM_COLUNAS-1]=soma/(NUM_COLUNAS-1);
    }
}

void exibe_relatorio(float controle[][NUM_COLUNAS]){
    for(int i = 0; i < NUM_ALUNOS; i++){
            printf("Aluno: %d\n", (i+1));
        for(int j=0; j<NUM_COLUNAS-1; j++){
            printf("\tNota P%d: %.2f\n",(j+1), controle[i][j]);
        }
        printf("\tMédia: %.2f\n\n\n", controle[i][NUM_COLUNAS-1]);
    }
}

void exibe_media_global(float controle[][NUM_COLUNAS]){
    float soma=0, media;
    int i;
    for (i = 0; i < NUM_ALUNOS; i++){
        soma+=controle[i][NUM_COLUNAS-1];
    }
    media=soma/(NUM_ALUNOS);
    printf("Media global e: %.2f\n", media);
}

int main(){
    float controle[NUM_ALUNOS][NUM_COLUNAS];
    le_notas(controle);
    calcula_media(controle);
    exibe_relatorio(controle);
    exibe_media_global(controle);
    return 0;
}
