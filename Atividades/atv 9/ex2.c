#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}Coordenada;

int main(){
    Coordenada cord;
    float dist;
    printf("Digite o ponto no formato (x,y) = ");
    printf("\n\nX = ");
    scanf("%f", &cord.x);
    printf("\nY = ");
    scanf("%f", &cord.y);
    dist = sqrt( (pow(cord.x, 2)) + (pow(cord.y, 2)) );
    printf("\nDistancia da origem (0,0) ate o ponto (%.0f,%.0f) = %.2f\n\n", cord.x, cord.y, dist);
    return 0;
}
