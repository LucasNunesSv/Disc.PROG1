#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado(){
    int sorteio;
    sorteio = (rand()%6)+1;
    return sorteio;
}
int main()
{
    int i=0, num;
    int cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
    float pc1, pc2, pc3, pc4, pc5, pc6;

    do{
        num = dado();
        i++;
        switch(num){
            case 1: cont1++;
                break;
            case 2: cont2++;
                break;
            case 3: cont3++;
                break;
            case 4: cont4++;
                break;
            case 5: cont5++;
                break;
            case 6: cont6++;
                break;
        }
    }while(i<1000000);
    pc1 = (float)(cont1*100)/1000000;
    pc2 = (float)(cont2*100)/1000000;
    pc3 = (float)(cont3*100)/1000000;
    pc4 = (float)(cont4*100)/1000000;
    pc5 = (float)(cont5*100)/1000000;
    pc6 = (float)(cont6*100)/1000000;
    printf("Quantidade de numero '1' = %i\n", cont1);
    printf("Porcentagem de numero '1' = %.2f%%\n\n", pc1);
    printf("Quantidade de numero '2' = %i\n", cont2);
    printf("Porcentagem de numero '2' = %.2f%%\n\n", pc2);
    printf("Quantidade de numero '3' = %i\n", cont3);
    printf("Porcentagem de numero '3' = %.2f%%\n\n", pc3);
    printf("Quantidade de numero '4' = %i\n", cont4);
    printf("Porcentagem de numero '4' = %.2f%%\n\n", pc4);
    printf("Quantidade de numero '5' = %i\n", cont5);
    printf("Porcentagem de numero '5' = %.2f%%\n\n", pc5);
    printf("Quantidade de numero '6' = %i\n", cont6);
    printf("Porcentagem de numero '6' = %.2f%%\n\n", pc6);
    return 0;
}
