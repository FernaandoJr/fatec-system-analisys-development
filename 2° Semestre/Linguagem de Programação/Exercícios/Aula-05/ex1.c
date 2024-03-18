#include <stdio.h>

/*
Escreva um programa que leia um vetor de 10 números inteiros e calcule e imprima a soma de todos os seus elementos.
*/

int main () {
    int vetor[10] ={};
    int soma = 0;
    for(int i = 0; i < 10;++i){
        printf("Digite o %d° número: ",i+1);
        scanf("%d", &vetor[i]);

        soma+= vetor[i];
    }
    printf("Resultado: %d",soma);
    return 0;
}