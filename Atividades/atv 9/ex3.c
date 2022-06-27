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
    b = (r1.inf_dir.x - r1.sup_esq.x);
    h = (r1.sup_esq.y - r1.inf_dir.y);
    area = b*h;
    diag = sqrt( pow(b, 2) + pow(h, 2));
    peri = (2*b)+(2*h);
    printf("\nArea = %.2f", area);
    printf("\nDiagonal = %.2f", diag);
    printf("\nPerimetro = %.2f\n\n", peri);
    return;
}
