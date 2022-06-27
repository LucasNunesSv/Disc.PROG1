#include <stdio.h>
#include <stdlib.h>

int main(){
    float array[10];
    float *ptr;
    int i;

    ptr = array;

    for(i=0; i<10; i++){
        printf("Digite o valor - ");
        scanf("%f", &array[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("Endereço = %p\n", ptr);
        ptr++;
    }
    return 0;
}
