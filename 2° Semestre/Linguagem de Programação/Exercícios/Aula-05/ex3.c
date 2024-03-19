#include <stdio.h>
/*
Desenvolva um programa que leia um vetor de 8 posições e, 
em seguida, encontre o maior valor e a sua posição no vetor. 
Faça o mesmo para o menor valor.
*/

int main (int argc, char *argv[]) {
    int vetor[8]= {311,121,233,4111,312,129,125,122};
    int maior = 0, posicao;
    for(int i = 0;i < 8;i++){
        if(vetor[i] > maior){
                maior = vetor[i];
                posicao = i+1;
            }
    }

    printf("Maior Número é: %d\n", maior);
    printf("Posição: %d", posicao);
    
    return 0;
}