#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD 100

typedef struct{
    char rua[QTD];
    int num;
    char bairro[QTD];
    char cidade[QTD];
}Endereco;

typedef struct{
    char nome[QTD];
    char curso[QTD];
    int semestre;
    Endereco end;
}Aluno;

void exibe_dado_aluno (Aluno a);
void exibe_alunos (Aluno A[], int qtd);
void cadastra_alunos (Aluno A[], int qtd);
Aluno aluno_mais_antigo(Aluno A[], int qtd);

int main(){
    Aluno *A, dino;
    int num;
    printf("Digite a Quantidade de Alunos = ");
    scanf("%i", &num);
    A = (Aluno*) malloc(num * sizeof(Aluno));
    cadastra_alunos(A, num);
    printf("\n\n-----------------\nDados Cadastrados\n-----------------\n\n");
    exibe_alunos(A, num);
    dino = aluno_mais_antigo(A, num);
    exibe_dado_aluno(dino);
    free(A);
    return 0;
}

void cadastra_alunos (Aluno *A, int qtd){
   printf("\n******************\nCadastro de Alunos\n******************\n");
   for(int i=0; i<qtd; i++){
        printf("\n\n*******\nAluno %i\n*******\n\n", i+1);
        printf("Nome = ");
        fflush(stdin);
        gets(A[i].nome);
        printf("Curso = ");
        gets(A[i].curso);
        printf("Semestre = ");
        scanf("%i", &A[i].semestre);
        printf("\n\nEndereco - Rua = ");
        fflush(stdin);
        gets(A[i].end.rua);
        printf("Numero = ");
        scanf("%i", &A[i].end.num);
        printf("Bairro = ");
        fflush(stdin);
        gets(A[i].end.bairro);
        printf("Cidade = ");
        gets(A[i].end.cidade);
   }
}
void exibe_alunos (Aluno *A, int qtd){
    for(int i=0; i<qtd; i++){
        printf("\n\n ### Dados do aluno %i ###\n\n", i+1);
        printf("Nome = %s - %s - semestre %i", A[i].nome, A[i].curso, A[i].semestre);
        printf("\nEndereco: Rua %s, numero %i - Bairro %s - Cidade: %s\n\n", A[i].end.rua, A[i].end.num, A[i].end.bairro, A[i].end.cidade);
    }
}

Aluno aluno_mais_antigo(Aluno A[], int qtd){
    int i, posi_vei;
    int vei = 0;
    for(i=0; i<qtd; i++){
        if(A[i].semestre > vei){
            vei = A[i].semestre;
            posi_vei = i;
        }
    }
    return A[posi_vei];
}

void exibe_dado_aluno (Aluno a){
    printf("\n\n @@@ Alunos mais Antigo @@@\n\n");
    printf("Nome = %s - %s - semestre %i", a.nome, a.curso, a.semestre);
    printf("\nEndereco: Rua %s, numero %i - Bairro %s - Cidade: %s\n\n", a.end.rua, a.end.num, a.end.bairro, a.end.cidade);

}





