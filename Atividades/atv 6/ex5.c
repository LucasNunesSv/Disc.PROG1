#include <stdio.h>
#include <string.h>

void elimina_espaco(char str1[],char str2[]);

int main(){
    char str1[100], str2[100];
    printf("Digite o texto da string = ");
    fgets(str1, 100, stdin);
    elimina_espaco(str1, str2);
    printf("\nAntes: ");
    puts(str1);
    printf("Depois: ");
    puts(str2);
    return 0;
}

void elimina_espaco(char str1[], char str2[]){
    int tam, cont = 0;
    tam = strlen(str1);
    for(int i = 0; i < tam; i++){
        if(str1[i] != ' '){
            str2[cont] = str1[i];
            cont ++;
        }
    }
    str2[tam] = '\0';
}


    /*int i, cont=0;
    int tam = strlen(str1);
    char aux;
    for(i=0; i<tam; i++){
        str2[i]=str1[i];
        if(str1[i]==' '){
            cont++;
        }
    }
    for(i=0; i<tam; i++){
        if(str2[i]==' '){
            aux = str2[i+1];
            str2[i+1] = str2[i];
            str2[i] = aux;
        }
    }
    str2[tam-cont]='\0';
}*/
