#include <stdio.h>
#include <math.h>

int main()
{
    char letra;
    float a, b, c, d, e, f;
    a=1.5;
    b=4;
    c=2;
    d=3;
    e=1.2;
    f=4.3;
    printf("Digite a alternativa desejada do exercicio 2\nAlternativa A = a\nAlternativa B = b\nAlternativa C = c\nAlternativa D = d \n= ");
    scanf("%c", &letra);

    switch(letra)
    {
    case 'a':
        printf("\nResultado da expressao = %.4f\n", (a*(c+d))/(b*(e+f)));
            break;
    case 'b':
        printf("\nResultado da expressao = %.4f\n", ((pow(a, b+c))/(e+f))+d);
            break;
    case 'c':
        printf("\nResultado da expressao = %.4f\n", (a+((pow(c+d, 2))/(pow(b, 2)))*d)*(1/c));
            break;
    case 'd':
        printf("\nResultado da expressao = %.4f\n", (-b+sqrt(pow(b, 2)-4*a*c))/(2*a));
            break;
    default: printf("\n\a * Operador invalido * \n");
    }
    return 0;
}
