#include <stdio.h>

int main()
{
    int cont, num, dentro, fora;
    int soma_dentro=0, soma_fora=0;
    for(cont=0; cont<10; cont++){
        printf("Digite um numero (n) = ");
        scanf("%i", &num);

        if((num >= 10) && (num <= 20)){
        	soma_dentro=soma_dentro+1;
        }
        else{
        	soma_fora=soma_fora+1;
        }
    }
    printf("\n%i estao dentro do intervalo\n", soma_dentro);
    printf("\n%i estao fora do intervalo\n", soma_fora);
    return 0;
}
