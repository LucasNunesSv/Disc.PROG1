#include <stdio.h>
#define TAM 2

void le_vetor(int vet_mat[], float vet_sal[], int tam);
void imprime_dados(int vet_mat[], float vet_sal[], float vet_sal_ajustado[], int tam);

float aum_p=15;
float aum_i=20;

int main(){
    int vet_mat[TAM], i;
    float vet_sal[TAM], vet_sal_ajustado[TAM];
    le_vetor(vet_mat, vet_sal, TAM);
    for(i=0; i<TAM; i++){
        if(vet_mat[i]%2 == 0){
            vet_sal_ajustado[i]=vet_sal[i]+(vet_sal[i]*aum_p/100);
        }
        else{
            vet_sal_ajustado[i]=vet_sal[i]+(vet_sal[i]*aum_i/100);
        }
    }
    imprime_dados(vet_mat, vet_sal, vet_sal_ajustado, TAM);
    return 0;
}
void le_vetor(int vet_mat[], float vet_sal[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("Digite a matricula do funcinario %i = ", i+1);
        scanf("%i", &vet_mat[i]);
        printf("Digite o salario base do funcionario %i = ", i+1);
        scanf("%f", &vet_sal[i]);
        printf("\n");
    }
}
void imprime_dados(int vet_mat[], float vet_sal[], float vet_sal_ajustado[], int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("\nFuncionario %i", i+1);
        printf("\nMatricula = %i", vet_mat[i]);
        printf("\nSalario base = %.2f", vet_sal[i]);
        if(vet_mat[i]%2 == 0){
            printf("\nPercentual de aumento = %.0f%%", aum_p);
        }
        else{
            printf("\nPercentual de aumento = %.0f%%", aum_i);
        }
        printf("\nSalario corrigido = %.2f\n", vet_sal_ajustado[i]);
    }
}
