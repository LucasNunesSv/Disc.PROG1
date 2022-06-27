#include <stdlib.h>
#include <stdio.h>

void func(int *px, int *py)
{
    px = py;

    *py = (*py) * (*px);
    printf("\n%d\n", *py);

    *px = *px + 2;
    printf("\n%d\n", *px);
}

void main(void)
{
    int x, y;
    printf("Digite 3 -");
    scanf("%d", &x); //3
    printf("Digite 4 -");
    scanf("%d", &y); //4
    func(&x, &y);
    printf("\nx = %d, y = %d\n", x, y);
    printf("\n");
    printf("| teste de mesa |\n");
    printf("|_______________|\n");
    printf("|  x  y  px py  |\n");
    printf("|  3  4  -   -  |\n");
    printf("|  3  4  Ex  Ey |\n");
    printf("|  3  4  Ey  Ey |\n");
    printf("|  3  16 Ey  Ey |\n");
    printf("|  3  18 Ey  Ey |\n");

}

