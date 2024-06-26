#include <stdio.h>

/*
Escreva uma função que aceite um vetor de números e retorne o maior e o
menor número.
*/

void MaiorMenor(int vetor[5]){
    int maior = vetor[0];
    int menor = vetor[0];

    for(int i = 0; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        } else if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
}

int main () {
    int vetor[5] = {1, 2, 3, 4, 5};
    MaiorMenor(vetor);
    return 0;
}