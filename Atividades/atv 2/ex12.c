#include <stdio.h>
#include <math.h>

int main()
{
    int codigo;
    printf("Digite o codigo do cargo = ");
    scanf("%i", &codigo);

    switch(codigo)
    {
        case 101: printf("Cargo = Vendedor");
            break;
        case 102: printf("Cargo = Atendente");
            break;
        case 103: printf("Cargo = Auxiliar Tecnico");
            break;
        case 104: printf("Cargo = Assistente");
            break;
        case 105: printf("Cargo = Coordenador de grupo");
            break;
        case 106: printf("Cargo = Gerente");
            break;
        default: printf("\a\n * Codigo Invalido * \n");
    }
    return 0;
}
