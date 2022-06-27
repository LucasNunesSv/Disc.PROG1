#include <stdio.h>

int soma(int x, int y){
    int soma;
    soma=x+y;
    return soma;
}

int main(){
    int x, y, z;
    printf("insira os dois numeros =\n");
    scanf("\n%i%i", &x, &y);
    z=soma(x, y);
    printf("soma eh %d", z);
    return 0;
}
