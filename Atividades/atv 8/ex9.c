#include <stdio.h>

void main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++){
        printf("%d ", *(vet+i));
    }
}
// exibe o valor armazenado na posi��o de memoria, que logo em seguida � incrementada para acessar a proxima posi��o e exibir o valor dela.
void main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++){
        printf("%p ", vet+i);
    }
}
// exibe a posi��o de memoria do vetor, que logo em seguida � incrementada para exibir a posi��o seguinte.
void main(){
    int vet[] = {4,9,13};
    int *o = vet;
    int i;
    for(i=0; i<3; i++){
        printf("%p ", o++);
    }
}
// exibe a posi��o de memoria do vetor pelo ponteiro "o" que esta apontando para ele, que logo em seguida � incrementado para exibir a posi��o seguinte.
