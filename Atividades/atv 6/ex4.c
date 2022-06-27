#include <stdio.h>
#include <string.h>

 void strcpy_2(char string_ori[], char string_dest[]);

int main(){
    char string_ori[100], string_dest[100];
    printf("Digite a string de origem = ");
    fgets(string_ori, 100, stdin);
    strcpy_2(string_ori, string_dest);
    printf("\nString origem = ");
    puts(string_ori);
    printf("\nString destino = ");
    puts(string_dest);
    printf("\nString destino usando strcpy normal = ");
    puts(strcpy(string_ori, string_dest));
    printf("\n");
    return 0;
}

 void strcpy_2(char string_ori[], char string_dest[]){
    int tam = strlen(string_ori);
    for(int i=0; i<tam; i++){
        string_dest[i]=string_ori[i];
    }
    string_dest[tam]='\0';
 }

