#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Ponto;

typedef struct{
    Ponto sup_esq;
    Ponto inf_dir;
}Retangulo;

int main(){
    Retangulo r1;
    float b, h, area, diag, peri;
    float px, py;

    printf(" * Ponto Superior Esquerdo * ");
    printf("\n X = ");
    scanf("%f", &r1.sup_esq.x);
    printf(" Y = ");
    scanf("%f", &r1.sup_esq.y);
    printf("\n * Ponto Inferior Direito * ");
    printf("\n X = ");
    scanf("%f", &r1.inf_dir.x);
    printf(" Y = ");
    scanf("%f", &r1.inf_dir.y);

    printf("\nDigite um ponto (x,y) = ");
    printf("\n X = ");
    scanf("%f", &px);
    printf(" Y = ");
    scanf("%f", &py);

    if((px >= r1.sup_esq.x)&&(px <= r1.inf_dir.x)&&(py >= r1.inf_dir.y)&&(py <= r1.sup_esq.y)){
        printf("\nO ponto (%.0f,%.0f) esta dentro do retangulo!\n\n", px, py);
    }
    else{
        printf("\nO ponto (%.0f,%.0f) nao esta dentro do retangulo!\n\n", px, py);
    }
    return 0;
}
