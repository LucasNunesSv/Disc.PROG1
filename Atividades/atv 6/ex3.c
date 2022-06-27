#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tira_espaco(char palavra[], char palavra2[]);
void palindrometro(char palavra2[]);

int main(){
    char palavra[100], palavra2[100];
    int tam;
    fflush(stdin);
    printf("Digite a palavra = \n");
    fgets(palavra, 100, stdin);
    palavra[strlen(palavra) -1]='\0';
    tira_espaco(palavra, palavra2);
    palindrometro(palavra2);
    return 0;
}

void tira_espaco(char palavra[], char palavra2[]){
    int tam, cont = 0, i;
    tam = strlen(palavra);

    for(i = 0; i < tam; i++){
        if(palavra[i] != ' '){
            palavra2[cont] = palavra[i];
            cont ++;
        }
    }
    palavra2[cont] = '\0';
}

void palindrometro(char palavra2[]){
    int i, j;
    int tam=strlen(palavra2);

    for(i = tam - 1, j = 0; j < tam; j++, i--){
       if(palavra2[i]!=palavra2[j]){
            printf("\nNao palindromo\n");
            return 0;
        }
    }

    printf("\nPalindromo\n");
}
