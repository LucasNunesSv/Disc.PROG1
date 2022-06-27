#include <stdio.h>
#include <stdlib.h>

int main(){
    double array[10];
    double *ptr;
    int i;

    ptr = array;

    for(i=0; i<10; i++){
        printf("Digite o valor - ");
        scanf("%lf", &array[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("Endereco = %p\n", ptr);
        ptr++;
    }
    return 0;
}

// o tipo double apresenta saltos de endereço de memoria maiores que o tipo float, devido a sua maior capacidade de armazenagem.

