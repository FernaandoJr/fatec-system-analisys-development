#include <stdio.h>
/*
Escreva um programa que leia uma matriz 2x2 e um número inteiro (escalar). 
O programa deve multiplicar cada elemento da matriz pelo escalar e 
imprimir a matriz resultante.
*/

int main () {
    int matriz[2][2]= {{110,120},{140,235}};
    int num = 31;
    printf("Resultado:\n");
    for(int i = 0;i < 2;i++){
        for(int j = 0; j <2;j++){
            printf("\t%d", matriz[i][j] * num);
        }
        printf("\n");
    }
    return 0;
}