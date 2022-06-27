#include <stdio.h>

void estacao(int d, int m);

int main(){
    int dia, mes;
    printf("Digite o dia = ");
    scanf("%i", &dia);
    printf("Digite o mes = ");
    scanf("%i", &mes);
    estacao(dia, mes);
    return 0;
}

void estacao(int d, int m){
    if(m>=10 && m<=11){
        printf("%i/%i e primavera", d, m);
    }
    if((m==12) && (d<=20)){
        printf("%i/%i e primavera", d, m);
    }
    if((m==12) && (d>=21)){
        printf("%i/%i e verao", d, m);
    }
    if(m>=1 && m<=2){
        printf("%i/%i e verao", d, m);
    }
    if((m==3) && (d<=20)){
        printf("%i/%i e verao", d, m);
    }
    if((m==3) && (d>=21)){
        printf("%i/%i e outono", d, m);
    }
    if(m>=4 && m<=5){
        printf("%i/%i e outono", d, m);
    }
    if((m==6) && (d<=20)){
        printf("%i/%i e outono", d, m);
    }
    if((m==6) && (d>=21)){
        printf("%i/%i e inverno", d, m);
    }
    if(m>=7 && m<=8){
        printf("%i/%i e inverno", d, m);
    }
    if((m==9) && (d<=22)){
        printf("%i/%i e inverno", d, m);
    }
    if((m==9) && (d>=23)){
        printf("%i/%i e primavera", d, m);
    }
}
