#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define TAM 100
#define FUNC 1

typedef struct{
    char rua[TAM];
    char bairro[TAM];
    char cidade[TAM];
    int num;
}Endereco;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char nome[TAM];
    Endereco end;
    Data dt;
    float com;
    int horas;
}Funcionario;

void preenche_dados(Funcionario F[], int qtd);
void exibe_dados(Funcionario F[], int qtd);
Funcionario funcionario_mais_novo(Funcionario F[],int qtd);

int main(){
    Funcionario F[FUNC], mais_novo;

    preenche_dados(F, FUNC);
    exibe_dados(F, FUNC);
    mais_novo = funcionario_mais_novo(F, FUNC);
    printf("\n\n ### Funcionario mais Novo ###\n\n");
    printf("Nome = %s\n", mais_novo.nome);
    printf("\nEndereco: Rua %s, numero %i - Bairro %s - Cidade: %s\n\n", mais_novo.end.rua, mais_novo.end.num, mais_novo.end.bairro, mais_novo.end.cidade);
    printf("Comissao = %.2f  -  Horas trabalhadas = %i\n\n", mais_novo.com, mais_novo.horas);

    return 0;
}

void preenche_dados(Funcionario F[], int qtd){
    printf("\n*********************\nCadastro de Funcionarios\n*********************\n");
   for(int i=0; i<qtd; i++){
        printf("\n\n**********\nFuncionario %i\n**********\n\n", i+1);
        printf("Nome = ");
        fflush(stdin);
        gets(F[i].nome);
        printf("\n\nEndereco - Rua = ");
        fflush(stdin);
        gets(F[i].end.rua);
        printf("Numero = ");
        scanf("%i", &F[i].end.num);
        printf("Bairro = ");
        fflush(stdin);
        gets(F[i].end.bairro);
        printf("Cidade = ");
        gets(F[i].end.cidade);
        printf("\n\nData de nascimento - Dia = ");
        scanf("%i", &F[i].dt.dia);
        printf("\nMes = ");
        scanf("%i", &F[i].dt.mes);
        printf("\nAno = ");
        scanf("%i", &F[i].dt.ano);
        printf("\n\nComissao = ");
        scanf("%f", &F[i].com);
        printf("\nHoras trabalhadas = ");
        scanf("%i", &F[i].horas);
   }
}

void exibe_dados(Funcionario F[], int qtd){
    printf("\n\n-----------------\nDados Cadastrados\n-----------------\n\n");
    for(int i=0; i<qtd; i++){
        printf("\n\n ### Dados do Funcionario %i ###\n\n", i+1);
        printf("Nome = %s\n", F[i].nome);
        printf("\nEndereco: Rua %s, numero %i - Bairro %s - Cidade: %s\n\n", F[i].end.rua, F[i].end.num, F[i].end.bairro, F[i].end.cidade);
        printf("Data de nascimento = %i/%i/%i\n\n", F[i].dt.dia, F[i].dt.mes, F[i].dt.ano);
        printf("Comissao = %.2f  -  Horas trabalhadas = %i\n\n", F[i].com, F[i].horas);
    }
}

Funcionario funcionario_mais_novo(Funcionario F[],int qtd){
    int i, posi_novo;
    int ano=9999999, mes = 9999999, dia = 99999999;
    for(i=0; i<qtd; i++){
        if(F[i].dt.ano < ano){
            ano = F[i].dt.ano;
            if(F[i].dt.mes < mes){
                mes = F[i].dt.mes;
                if(F[i].dt.dia < dia){
                    dia = F[i].dt.dia;
                    posi_novo = i;
                }
            }
        }
    }
    return F[posi_novo];
}
