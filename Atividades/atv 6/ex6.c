#include <stdio.h>
#include <string.h>

int conta_vogal(char string[]);

int main(){
    char string[100];
    int num_vogais;
    printf("Digite o texto da string = ");
    fgets(string, 100, stdin);
    num_vogais = conta_vogal(string);
    printf("\nNumero de vogais = %i\n", num_vogais);
    return 0;
}

int conta_vogal(char string[]){
    int cont=0;
    for(int i=0; string[i]!='\0'; i++){
        switch(string[i]){
            case'a': cont++;
                break;
            case'e': cont++;
                break;
            case'i': cont++;
                break;
            case'o': cont++;
                break;
            case'u': cont++;
                break;
            case'A': cont++;
                break;
            case'E': cont++;
                break;
            case'I': cont++;
                break;
            case'O': cont++;
                break;
            case'U': cont++;
                break;
        }
    }
    return cont;
}
