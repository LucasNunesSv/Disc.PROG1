#include <stdio.h>
#define TAM 10

void recebe_nota(float vet_nota1[], float vet_nota2[], int tam);
void calcula_media(float vet_nota1[], float vet_nota2[], float vet_media[], int tam);
void imprime_resultado(float vet_nota1[], float vet_nota2[], float vet_media[], int tam);

int main(){
    float vet_nota1[TAM], vet_nota2[TAM], vet_media[TAM];
    recebe_nota(vet_nota1, vet_nota2, TAM);
    calcula_media(vet_nota1, vet_nota2, vet_media, TAM);
    imprime_resultado(vet_nota1, vet_nota2, vet_media, TAM);
    return 0;
}
void recebe_nota(float vet_nota1[], float vet_nota2[], int tam){
    int i;
    printf("--- NOTA 1 ---\n");
    for(i=0; i<tam; i++){
        printf("Digite a nota do aluno %i = ", i+1);
        scanf("%f", &vet_nota1[i]);
    }
    printf("\n--- NOTA 2 ---\n");
    for(i=0; i<tam; i++){
        printf("Digite a nota do aluno %i = ", i+1);
        scanf("%f", &vet_nota2[i]);
    }
}
void calcula_media(float vet_nota1[], float vet_nota2[], float vet_media[], int tam){
    int i;
    for(i=0; i<tam; i++){
        vet_media[i] = (vet_nota1[i]+vet_nota2[i])/2;
    }
}
void imprime_resultado(float vet_nota1[], float vet_nota2[], float vet_media[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("\nAluno %i\n", i+1);
        printf("Nota 1 = %.2f\n", vet_nota1[i]);
        printf("Nota 2 = %.2f\n", vet_nota2[i]);
        printf("Media = %.2f\n", vet_media[i]);
    }
}


