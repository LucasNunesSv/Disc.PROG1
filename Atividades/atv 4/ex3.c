#include <stdio.h>

int somatorio_f(int num){
    int n=num, i, somatorio=0;
    for(i=0; i<=n; i++){
        somatorio = somatorio + i;
    }
    return somatorio;
}

int main(){
    int n, somatorio;
    printf("Digite um valor =");
    scanf("%d", &n);
    somatorio = somatorio_f(n);
    printf("Resultado do somatorio = %i", somatorio);
}
