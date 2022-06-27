#include <stdio.h>
#include <string.h>

int strichr(char str[], char c);

int main(){
    char str[20], c;
    int result;
    printf("Digite a string ");
    fgets(str, 20, stdin);
    printf("\nDigite o caractere a ser procurado = ");
    scanf("%c", &c);
    result = strichr(str, c);
    printf("\nPosicao da primeira ocorrencia = %i\n", result);
    if(result==-1){
         printf("* Sem correspondencia *\n");
    }
    return 0;
}

int strichr(char str[], char c){
    int i, position;
    for(i=0; str[i]!='\0'; i++){
        if(str[i] == c){
            position = i;
            break;
        }
        else{
            position = -1;
        }
    }
    return position;
}
