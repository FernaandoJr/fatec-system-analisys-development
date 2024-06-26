#include <stdio.h>
/*
Escreva um programa que leia um vetor de 12 posições. Substitua todas as posições que contêm um 
valor negativo por zero. Ao final, imprima o vetor modificado.
*/

int main () {
    int vetor[12] ={1,-2,3,4,-5,6,-7,8,-9,10,11,-12};
    for(int i = 0; i < 12;i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
        printf("%d ",vetor[i]);
    }
    return 0;
}