#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){
    int sorteio;
    srand(time(NULL));
    sorteio = (rand()%6)+1;
    return sorteio;
}
int main()
{
    int num_sorteado;
    num_sorteado = dado();
    printf("Numero sorteado = %i\n", num_sorteado);
    return 0;
}
