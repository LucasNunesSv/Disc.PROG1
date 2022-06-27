#include <stdio.h>

int main(){
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            for(int k=1; k<=6; k++){
                printf("[%i - %i - %i]\n", i, j, k);
            }
            printf("\n");
        }
        //printf("\n");
    }
    return 0;
}
