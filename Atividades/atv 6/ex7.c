#include <stdio.h>
#include <string.h>

void strins(char str[], char c, int pos);

int main(){
    char c, str[100];
    int pos;
    printf("Digite o texto da string =");
    fgets(str, 100, stdin);
    printf("Digite o caractere que deseja incluir = ");
    scanf("%c", &c);
    printf("Digite a posicao que deseja inserir = ");
    scanf("%i", &pos);
    printf("\nAntes = ");
    puts(str);
    strins(str, c, pos);
    printf("Depois = ");
    puts(str);
    return 0;
}

void strins(char str[], char c, int pos){
    int tam=strlen(str);
    for(int i=tam; i>=pos; i--){
        str[i+1]=str[i];
    }
    str[pos]=c;
    str[tam+1]='\0';
}

