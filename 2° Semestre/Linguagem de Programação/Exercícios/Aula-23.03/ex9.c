#include <stdio.h>
/*
Implemente um programa que soma duas matrizes de mesmo tamanho e imprime o resultado.
*/
int main () {
    int matriz1[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int matriz2[3][3]= {{110,120,130},{140,115,106},{107,180,190}};
    int soma[3][3];
    printf("\tSoma:\n");
    for(int i = 0;i < 3;i++){
        for(int j = 0; j <3;j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            printf("\t%d ", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}