#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float f;
    double d;
    char c;

    printf("Tamanho do tipo int = %i bytes\n", sizeof(i));
    printf("Tamanho do tipo float = %i bytes\n", sizeof(f));
    printf("Tamanho do tipo double = %i bytes\n", sizeof(d));
    printf("Tamanho do tipo char = %i bytes\n", sizeof(c));
    return 0;
}
