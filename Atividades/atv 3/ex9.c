#include <stdio.h>

int main(){

int a=0, b=1, auxiliar, cont, n, fibo;

printf("Serie de Fibonacci:\n");
printf("\nDigite um numero para os primeiros termos da serie Fibonacci ");
scanf("%d", &fibo);

if(fibo>=1){
    printf("\n%d\n", b);
    fibo=fibo-1;

    for(cont = 0; cont < fibo; cont++){
      auxiliar = a + b;
      a = b;
      b = auxiliar;
      printf("%d\n", auxiliar);
    }
}
else{
    printf("\nNao existem correspondentes para o numero digitado\n");
}
    return 0;
}
