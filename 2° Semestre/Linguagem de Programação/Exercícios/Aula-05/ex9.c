#include <stdio.h>
/*
Elabore um programa que leia uma matriz 5x5. O programa deve encontrar e imprimir o 
maior valor da matriz e sua respectiva posição (linha e coluna).
*/
int main () {
    int maior = 0;
    int linha, coluna;
    int matriz[5][5]= {
                        {311,121,233,4111,312},
                        {516,17,824,911,10113},
                        {111,142,813,104,1115},
                        {156,1787,188,196,209},
                        {2021,224,243,214,235}
    };
    for(int i = 0;i < 5;i++){
        for(int j = 0; j <5;j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                coluna = j;
                linha = i;
            }
        }
    }
    printf("Maior Número dentro da matriz: %d\n",maior);
    printf("Linha: %d\n",linha+1);
    printf("Coluna: %d\n",coluna+1);
    return 0;
}