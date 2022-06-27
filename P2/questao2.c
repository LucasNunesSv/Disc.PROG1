#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TAM 50

void tira_espaco(char str[]);
void estatistica(char str[]);

int main(){
    char str[TAM];
    printf("Digite o texto da string = ");
    fgets(str, TAM, stdin);
    tira_espaco(str);
    estatistica(str);
    return 0;
}

void tira_espaco(char str[]){
    int j=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

void estatistica(char str[]){
    int i;
    int vog=0, cons=0, tam=strlen(str)-1;
    for(i=0; i<tam; i++){
        if(str[i] == 'a' || str[i] =='A' || str[i] =='e' || str[i] =='E' || str[i] =='i' || str[i] =='I' || str[i] =='o' || str[i] =='O' || str[i] =='u' || str[i] =='U'){
            vog++;
        }
        else{
            cons++;
        }
    }
    printf("\n\nPercentual de Vogais = %i%%", (vog*100)/tam);
    printf("\nPercentual de Consoantes = %i%%\n\n", (cons*100)/tam);
}
