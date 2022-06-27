#include <stdio.h>
#include <math.h>

int main()
{
    int idade;
    printf("Digite a idade = ");
    scanf("%i", &idade);
    if(idade<13){
        printf("\nCrianca\n");
    }
    else{
        if(idade>=13 && idade<20){
            printf("\nAdolescente\n");
        }
        else{
            if(idade>=20 && idade<60){
                printf("\nAdulto\n");
            }
            else{
                printf("\nIdoso\n");
            }
        }
    }
    return 0;
}
