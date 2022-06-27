#include <stdio.h>

int soma1(int q, int c); // Variaveis locais da fun��o (soma1) ou par�metros
int soma2(int ra);       // Variavel local da fun��o (soma2) ou par�metros

int i = 10; //Variavel Global
int j = 20; //Variavel Global

int main()
{
    int i, k, ra, p; // Variaveis locais da fun��o (main)

    p = 10;
    ra = 5;

    for(i=0; i<3; i++){
        k = soma1(ra, p);
        ra = soma2(k);
        printf("%d, %d\n", ra, k);
    }
    return 0;
}
int soma1(int q, int c){ //Parametros da fun��o soma1;
    int soma = q+1+c; //Vari�vel local da fun��o soma1;
    return soma;
}
int soma2(int ra){ //Parametro da fun��o soma2;
    int k = j; // Vari�vel local da fun��o soma2;
    ra = ra + k;
    return ra;
}
/* Letra a)

    Vari�veis Globais:

        int i e j.

    Vari�veis Locais:

        int q e c (par�mentros da fun��o soma1)

        int ra (par�metro da fun��o soma2)

        int i, k, ra e p (vari�veis locais da fun��o main)

        int soma (vari�vel local da fun��o soma1)

        int k (vari�vel local da fun��o soma2)
*/

/* Letra b)

    Este c�digo retornara os seguintes valores impressos na tela:

    36, 16
    67, 47
    98, 78

*/
