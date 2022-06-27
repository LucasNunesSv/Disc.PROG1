#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=6, b=9;
    int *pa, *pb;

    pa = &a;
    pb = &b;

    printf("Endereco de A = %p\n", pa);
    printf("Endereco de B = %p\n\n", pb);

    if(pa > pb){
        printf("Maior endereco = %p\n", pa);
    }
    else{
        printf("Maior endereco = %p\n", pb);
    }
    return 0;
}
