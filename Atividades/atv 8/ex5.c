#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5];
    int *ptr, num, i;

    ptr = array;

    for(i=0; i<5; i++){
        printf("Digite um numero = ");
        scanf("%i", ptr);
        ptr++;
    }
    ptr = array;
    printf("\n");
    for(i=0; i<5; i++){
        printf("%i - ", (*ptr)*2);
        ptr++;
    }
    printf("\n");
    return 0;
}
