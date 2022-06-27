#include <stdio.h>

void altera_vetor(int vetor1[]);

int main(){
    int vetor1[5], i;
    for(i=0; i<5; i++){
        printf("Digite o valor da posisao %i =", i);
        scanf("%i", &vetor1[i]);
    }
    printf("\nValores do vetor antes da alteracao = ");
    for(i=0; i<5; i++){
        printf("%i ", vetor1[i]);
    }
    altera_vetor(vetor1);
    printf("\nValores do vetor depois da alteracao = ");
    for(i=0; i<5; i++){
        printf("%i ", vetor1[i]);
    }
    printf("\n");
    printf("\n * Obs: os valores foram escolhidos aleatoriamente e estao no codigo fonte\n");
    return 0;
}
void altera_vetor(int vetor1[]){
    vetor1[0] = -2;
    vetor1[1] = 6;
    vetor1[2] = 8;
    vetor1[3]= -4;
    vetor1[4] = 3;
}
