#include <stdio.h>
#define TAM 10

void le_vetor(int vetor[], int tam);
void percorre_vetor(int vetor[], int tam);

int main()
{
    int vetor[TAM];
    le_vetor(vetor, TAM);
    printf("\nAntes\n");
    for(int i=0; i<TAM; i++)
    {
        printf(" %i -", vetor[i]);
    }
    percorre_vetor(vetor, TAM);
    printf("\nDepois\n");
    for(int i=0; i<TAM; i++)
    {
        printf(" %i -", vetor[i]);
    }
    return 0;
}
void le_vetor(int vetor[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("Digite o valor da posicao %i = ", i);
        scanf("%i", &vetor[i]);
    }
}
void percorre_vetor(int vetor[], int tam)
{
    int aux, j=tam-1;
    for(int i=0; i<tam/2; i++)
    {
        aux=vetor[i];
        vetor[i]=vetor[j-i];
        vetor[j-i]=aux;
    }
}
