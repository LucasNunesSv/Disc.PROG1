#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, maior=0, num;
    for(cont=0; cont<10; cont++){
        printf("Digite um numero (n) = "),
        scanf("%i", &num);
        if(num>maior){
            maior=num;
        }
    }
        printf("\nO maior numero digitado foi = %i\n", maior);
    return 0;
}
