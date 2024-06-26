#include <stdio.h>
/*
Desenvolva um programa que leia uma matriz 4x4 e imprima a sua diagonal principal.
*/

int main () {
    int matriz1[4][4]= {{21,25,37,19},{41,56,61,55},{17,85,59,52},{75,83,98,112}};
    printf("\nDiagonal:\n\n");
    for(int i = 0;i < 4;i++){
        for(int j = 0; j < 4;j++){
            i==j? printf("\t%d", matriz1[i][j]): printf("\t");
        }
        printf("\n");
    }
    return 0;
}