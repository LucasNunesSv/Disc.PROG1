#include <stdio.h>

void main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++){
        printf("%d ", *(vet+i));
    }
}
// exibe o valor armazenado na posição de memoria, que logo em seguida é incrementada para acessar a proxima posição e exibir o valor dela.
void main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0; i<3; i++){
        printf("%p ", vet+i);
    }
}
// exibe a posição de memoria do vetor, que logo em seguida é incrementada para exibir a posição seguinte.
void main(){
    int vet[] = {4,9,13};
    int *o = vet;
    int i;
    for(i=0; i<3; i++){
        printf("%p ", o++);
    }
}
// exibe a posição de memoria do vetor pelo ponteiro "o" que esta apontando para ele, que logo em seguida é incrementado para exibir a posição seguinte.
