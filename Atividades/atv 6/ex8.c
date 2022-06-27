#include <stdio.h>
#include <string.h>

void lingua_do_p(char string[]);

int main(){
    char string[100];
    int num_vogais;
    printf("Digite o texto da string = ");
    fgets(string, 100, stdin);
    lingua_do_p(string);
    printf("\n");
    puts(string);
    return 0;
}

void lingua_do_p(char string[]){
    int cont=0;
    for(int i=0; string[i]!='\0'; i++){
        switch(string[i]){
            case'a': string[i]='P';
                break;
            case'e': string[i]='P';
                break;
            case'i': string[i]='P';
                break;
            case'o': string[i]='P';
                break;
            case'u': string[i]='P';
                break;
            case'A': string[i]='P';
                break;
            case'E': string[i]='P';
                break;
            case'I': string[i]='P';
                break;
            case'O': string[i]='P';
                break;
            case'U': string[i]='P';
                break;
        }
    }
}
