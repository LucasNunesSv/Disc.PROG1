#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, cont, negativos;
    negativos=0;
    for(cont=0; cont<10; cont++){
        printf("Digite um numero = ");
        scanf("%i", &numero);

        if(numero<0){
            negativos++;
        }
    }

    printf("\n\aA quantidade de numeros negativos digitada foi = %i\n", negativos);

return 0;
}
