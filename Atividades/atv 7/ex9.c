#include <stdio.h>
#define NUM_L 4
#define NUM_C 4

void preenche(int matriz[][NUM_C]);
void imprime_matriz(int matriz[][NUM_C]);
void soma(int matriz[][NUM_C]);
void multiplicacao(int matriz[][NUM_C]);

int main(){
    int matriz[NUM_L][NUM_C];
    char cond, repete;
    preenche(matriz);
    printf("\nMatriz: \n\n");
    imprime_matriz(matriz);
    do{
        printf("\nMenu = \n\n's' para soma\n'm' para multiplicacao");
        printf("\n\nDigite a operacao desejada = ");
        scanf(" %c", &cond);
        switch(cond){
            case 's': soma(matriz);
                printf("Deseja repetir a operacao? (y ou n) = ");
                scanf(" %c", &repete);
                break;
            case 'S': soma(matriz);
                printf("Deseja repetir a operacao? (y ou n)");
                scanf(" %c", &repete);
                break;
            case 'm': multiplicacao(matriz);
                printf("Deseja repetir a operacao? (y ou n)");
                scanf(" %c", &repete);
                break;
            case 'M': multiplicacao(matriz);
                printf("Deseja repetir a operacao? (y ou n)");
                scanf(" %c", &repete);
                break;
        }
    }while(repete=='y' || repete=='Y');
    return 0;
}

void preenche(int matriz[][NUM_C]){
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            printf("Digite o Valor da posicao (%i,%i) = ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
}

void imprime_matriz(int matriz[][NUM_C]){
    for(int i=0; i<NUM_L; i++){
        for(int j=0; j<NUM_C; j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void soma(int matriz[][NUM_C]){
    int i, j, menu, soma=0;
    printf("\nMenu = \n");
    printf("1 - calculo para cada linha\n");
    printf("2 - calculo para cada coluna\n");
    printf("3 - calculo para a diagonal principal\n");
    printf("4 - calculo para a diagonal secundaria\n");
    printf("5 - calculo para os elementos da borda da matriz\n");
    printf("6 - calculo para os elementos internos da matriz\n");
    printf("\nDigite a operacao desejada = ");
    scanf("%i", &menu);
    switch(menu){
    case 1:
        for(i=0; i<NUM_L; i++){
            soma = 0;
            for(j=0; j<NUM_C; j++){
                soma += matriz[i][j];
            }
            printf("Soma da linha %i: %i\n", i, soma);
        }
        break;
    case 2:
        for(i=0; i<NUM_L; i++){
            soma = 0;
            for(j=0; j<NUM_C; j++){
                soma += matriz[j][i];
            }
            printf("Soma da coluna %i: %i\n", i, soma);
        }
        break;
    case 3:
        for(i=0; i<NUM_L; i++){
            for(j=0; j<NUM_C; j++){
                if(i==j){
                   soma += matriz[i][j];
                }
            }
        }
        printf("Soma da diagonal principal: %i\n", soma);
        break;
    case 4:
        for(i=0; i<NUM_L; i++){
            for(j=NUM_C-1; j>=0; j--){
                if((i+j) == NUM_C-1){
                   soma += matriz[i][j];
                }
            }
        }
        printf("Soma da diagonal secundaria: %i\n", soma);
        break;
    case 5:
        for(int i=0; i<NUM_L; i++){
            for(int j=0; j<NUM_C; j++){
                if(i==0){
                    soma+=matriz[i][j];
                }
                if(i==NUM_L-1){
                    soma+=matriz[i][j];
                }
                if(j==0 && i>0 && i<NUM_L-1){
                    soma+=matriz[i][j];
                }
                if(j==NUM_L-1 && i>0 && i<NUM_L-1){
                    soma+=matriz[i][j];
                }
            }
        }
        printf("Soma da Borda: %i\n", soma);
        break;
    case 6:
        for(int i=0; i<NUM_L; i++){
            for(int j=0; j<NUM_C; j++){
                if(j!=0 && j!=NUM_L-1 && i>0 && i!=0 && i<NUM_L-1 && i!=NUM_L-1){
                    soma+=matriz[i][j];
                }
            }
        }
        printf("Soma do meio: %i\n", soma);
        break;
    }
}
void multiplicacao(int matriz[][NUM_C]){
    int i, j, menu, soma=1;
    double soma1=1, soma2=1, soma3=1, soma4=1;
    printf("\nMenu = \n");
    printf("1 - calculo para cada linha\n");
    printf("2 - calculo para cada coluna\n");
    printf("3 - calculo para a diagonal principal\n");
    printf("4 - calculo para a diagonal secundaria\n");
    printf("5 - calculo para os elementos da borda da matriz\n");
    printf("6 - calculo para os elementos internos da matriz\n");
    printf("\nDigite a operacao desejada = ");
    scanf("%i", &menu);
    switch(menu){
    case 1:
        for(i=0; i<NUM_L; i++){
            soma = 1;
            for(j=0; j<NUM_C; j++){
                soma *= matriz[i][j];
            }
            printf("Multiplicacao da linha %i: %i\n", i, soma);
        }
        break;
    case 2:
        for(i=0; i<NUM_L; i++){
            soma = 1;
            for(j=0; j<NUM_C; j++){
                soma *= matriz[j][i];
            }
            printf("Multiplicacao da coluna %i: %i\n", i, soma);
        }
        break;
    case 3:
        for(i=0; i<NUM_L; i++){
            for(j=0; j<NUM_C; j++){
                if(i==j){
                   soma *= matriz[i][j];
                }
            }
        }
        printf("Multiplicacao da diagonal principal: %i\n", soma);
        break;
    case 4:
        for(i=0; i<NUM_L; i++){
            for(j=NUM_C-1; j>=0; j--){
                if((i+j) == NUM_C-1){
                   soma *= matriz[i][j];
                }
            }
        }
        printf("Multiplicacao da diagonal secundaria: %i\n", soma);
        break;
    case 5:
        for(int i=0; i<NUM_L; i++){
            for(int j=0; j<NUM_C; j++){
                if(i==0){
                    soma1*=matriz[i][j];
                }
                if(i==NUM_L-1){
                    soma2*=matriz[i][j];
                }
                if(j==0 && i>0 && i<NUM_L-1){
                    soma3*=matriz[i][j];
                }
                if(j==NUM_L-1 && i>0 && i<NUM_L-1){
                    soma4*=matriz[i][j];
                }
            }
        }
        printf("Multiplicacao da Borda: %.2lf\n", (soma1*soma2*soma3*soma4));
        break;
    case 6:
        for(int i=0; i<NUM_L; i++){
            for(int j=0; j<NUM_C; j++){
                if(j!=0 && j!=NUM_L-1 && i>0 && i!=0 && i<NUM_L-1 && i!=NUM_L-1){
                    soma*=matriz[i][j];
                }
            }
        }
        printf("Multiplicacao do meio: %i\n", soma);
        break;
    }
}
