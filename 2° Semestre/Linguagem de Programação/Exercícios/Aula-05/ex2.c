#include <stdio.h>
/*
Crie um programa que leia um vetor de 15 números inteiros e o apresente invertido.
Por exemplo, se o vetor de entrada for [1,2,3,...,15],
a saída deve ser [15,14,13,...,1].
*/

int main(){
    int vetor[15];
    int invertido_vetor[15];
    for (int i = 0; i < 15; i++){
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor Invertido: ");
    for (int i = 15-1; i>=0; i--){
        printf("%d ", vetor[i]);
    }
    return 0;
}