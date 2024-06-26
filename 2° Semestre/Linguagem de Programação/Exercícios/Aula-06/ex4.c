#include <stdio.h>

/*
Crie uma função que transponha uma matriz 3x3 
(transforme linhas em colunas e vice-versa).
*/

void TransporMatriz(int matriz[3][3]){
    int resultado[3][3];
    for(int linha = 0; linha < 3; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            resultado[linha][coluna] = matriz[coluna][linha];
            printf("%d ", resultado[linha][coluna]);
        }
        printf("\n");
    }
}

int main () {
    int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    printf("Matriz original:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz transposta:\n");
    TransporMatriz(matriz);

    return 0;
}

