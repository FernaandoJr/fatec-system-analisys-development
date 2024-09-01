#include <stdio.h>

int main () {
    int soma = 0;
    int matriz1[4][4]= {{1,25,37,19},{41,2,61,55},{17,85,3,52},{75,83,98,4}};
    printf("\nDiagonal:\n\n");
    for(int i = 0;i < 4;i++){
        for(int j = 0; j < 4;j++){
            if(i == j){
                soma += matriz1[i][j];
            }
            i==j? printf("\t%d", matriz1[i][j]): printf("\t");
        }
        printf("\n");
    }
    printf("\n Resultado da Soma da diagonal: %d",soma);
    return 0;
}