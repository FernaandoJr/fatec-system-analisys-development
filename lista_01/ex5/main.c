#include <stdio.h>

/*
Faça um programa que leia um número e imprima seu
sucessor e antecessor.
*/

int main() {
    int n1;
    int ant;
    int suc;
    printf("Digite um numero: ");
    scanf("%d",&n1);

    ant = n1-1;
    suc = n1+1;

    printf("O numero antecessor de %d (n1) eh %d\n", n1, ant);
    printf("O numero sucessor de %d (n1) eh %d", n1, suc);



    return 0;
}
