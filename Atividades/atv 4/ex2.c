#include <stdio.h>

int soma1(int q, int c); // Variaveis locais da função (soma1) ou parâmetros
int soma2(int ra);       // Variavel local da função (soma2) ou parâmetros

int i = 10; //Variavel Global
int j = 20; //Variavel Global

int main()
{
    int i, k, ra, p; // Variaveis locais da função (main)

    p = 10;
    ra = 5;

    for(i=0; i<3; i++){
        k = soma1(ra, p);
        ra = soma2(k);
        printf("%d, %d\n", ra, k);
    }
    return 0;
}
int soma1(int q, int c){ //Parametros da função soma1;
    int soma = q+1+c; //Variável local da função soma1;
    return soma;
}
int soma2(int ra){ //Parametro da função soma2;
    int k = j; // Variável local da função soma2;
    ra = ra + k;
    return ra;
}
/* Letra a)

    Variáveis Globais:

        int i e j.

    Variáveis Locais:

        int q e c (parâmentros da função soma1)

        int ra (parâmetro da função soma2)

        int i, k, ra e p (variáveis locais da função main)

        int soma (variável local da função soma1)

        int k (variável local da função soma2)
*/

/* Letra b)

    Este código retornara os seguintes valores impressos na tela:

    36, 16
    67, 47
    98, 78

*/
