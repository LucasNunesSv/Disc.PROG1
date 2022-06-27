#include<stdio.h>

int main()
{
    int num, fatorial;
    printf("Digite um valor (n) = ");
    scanf("%i", &num) ;

    for(fatorial = 1; num > 1; num = num - 1){
      fatorial = fatorial * num;
    }

  printf("\nO Fatorial do numero digitado eh = %i\n", fatorial);
  return 0;
}
