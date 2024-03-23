#include <stdio.h>
/*
Crie um programa que encontra o maior e o menor valor dentro de um vetor de inteiros.
 */
int main() {
    int maior = 0;
    int menor = 0;
    int vetor[5] = {123,31,1,23,22};
    for (int i = 0; i < 5; i++) {
        if(vetor[i] > maior){
            maior = vetor[i];
            menor = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("maior: %d\n", maior);
    printf("menor: %d", menor);
    return 0;
}