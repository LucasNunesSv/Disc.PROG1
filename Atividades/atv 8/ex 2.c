#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    int *pa, *pb;

    printf("Digite o valor para A = \n");
    scanf("%i", &a);
    printf("Digite o valor para B = \n");
    scanf("%i", &b);

    pa = &a;
    pb = &b;

    printf("Endereco de A = %p\n", pa);
    printf("Endereco de B = %p\n\n", pb);

    if(pa > pb){
        printf("Maior endereço = %i", *pa);
    }
    else{
        printf("Maior endereço = %i", *pb);
    }
    return 0;
}
