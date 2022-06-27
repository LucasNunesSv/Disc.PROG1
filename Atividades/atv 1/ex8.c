#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarar as variáveis
    float c, f;
    printf("Insira a temperatura em F\n");
    scanf("%f", &f);

    // isolar a variavel "c" do restante da equação
    // f=(9c+160)/5 - 5f=9c+160 - 9c=5f-160 - c=(5f-160)/9
    c = (5*f-160)/9;

    //Exibir o valor convertido
    printf("A temperatura em C e = %.2f\n", c);
    return 0;
}
