#include <stdio.h>


/*
Desenvolva um programa que leia um vetor com 20 números. Em seguida, 
determine e imprima quantos valores pares e ímpares ele possui.
*/


int main (int argc, char *argv[]) {
    int vetor[20] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int par = 0, impar = 0;
    for(int i = 0; i < 20;i++){
        vetor[i] % 2 == 0 ? par++ : impar++;
    }
    printf("Quantidade de Números impares: %d\n",impar);
    printf("Quantidade de Números pares: %d",par);
    return 0;
}