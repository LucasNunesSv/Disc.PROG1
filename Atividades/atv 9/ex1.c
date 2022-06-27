#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rua[50];
    int num;
    char bairro[50];
    char cidade[50];
}endereco;

typedef struct {
    char nome[100];
    int idade;
    endereco end;
}people;

int main(){
    people p1;

    printf("Digite o nome = ");
    fgets(p1.nome, 100, stdin);
    printf("\nDigite a idade = ");
    scanf("%i", &p1.idade);
    printf("\nDigite o endereco\n\n - Rua = ");
    getchar();
    fgets(p1.end.rua, 50, stdin);
    printf("\n - Numero = ");
    scanf("%i", &p1.end.num);
    printf("\n - Bairro = ");
    getchar();
    fgets(p1.end.bairro, 50, stdin);
    printf("\n - Cidade = ");
    fgets(p1.end.cidade, 50, stdin);

    printf("\n*****************\nDados Cadastrados\n*****************\n");
    printf("\nNome: "), puts(p1.nome);
    printf("Idade: %i anos\n", p1.idade);
    printf("\nEndereco: Rua "), puts(p1.end.rua);
    printf("Numero %i\n\n", p1.end.num);
    printf("Bairro "), puts(p1.end.bairro);
    printf("Cidade "), puts(p1.end.cidade);

    return 0;
}
