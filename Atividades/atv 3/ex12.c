#include <stdio.h>

int main()
{
    // 1� =
    int x;

    for(x = 2; x<= 13; x +=2){
        printf("%d\n", x);
    } // Os numeros impressos foram = 2, 4, 6, 8, 10 e 12


    // 2� =
    for(x = 5; x<= 22; x +=7){
        printf("%d\n", x);
    } // Os numeros impressos foram = 5, 12 e 19

    // 3� =
    for(x = 3; x<= 15; x +=3){
        printf("%d\n", x);
    } // Os numeros impressos foram = 3, 6, 9, 12 e 15

    // 4� =
    for(x = 1; x<= 5; x +=7){
        printf("%d\n", x);
    } // Os numeros impressos foram = 1

    // 5� =
    for(x = 12; x >= 2; x -=3){
        printf("%d\n", x);
    } // Os numeros impressos foram = 12, 9, 6 e 3

    return 0;
}
