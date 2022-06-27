#include <stdio.h>
#include <string.h>

void palindrometro(char palavra[], int tam);

int main(){
    char palavra[50];
    int tam;
    printf("Digite a palavra = ");
    fgets(palavra, 50, stdin);
    tam = strlen(palavra);
    palindrometro(palavra, tam);
    return 0;
}

void palindrometro(char palavra[], int tam){
    int i, j, cond=0;
    for(i=0, j=tam-2; i<tam/2; i++, j--){
        if(palavra[i]!=palavra[j]){
            cond=cond+1;
        }
    }
    if(cond==0){
        printf("\nPalindromo\n");
    }
    if(cond!=0){
        printf("\nNao palindromo\n");
    }
}
