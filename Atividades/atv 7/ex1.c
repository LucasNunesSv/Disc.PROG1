#include <stdio.h>
#define NUM_L 9
#define NUM_C 9

void letra_a();
void letra_b();


int main(){
    printf("Letra A\n\n");
    letra_a();
    printf("\nLetra B\n");
    letra_b();
    return 0;
}

void letra_a(){
    for(int i=0; i<=NUM_L; i++){
        for(int j=0; j<=NUM_C-i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void letra_b(){
    int i, j, k;
    for(i=0; i<=NUM_L; i++){
        for(j=0; j<=NUM_C-i-1; j++){
            printf(" ");
        }
        for(k=NUM_C; k>j; k--){
            printf("*");
        }
        printf("\n");
    }

}


