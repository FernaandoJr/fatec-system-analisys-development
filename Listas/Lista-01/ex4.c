#include <stdio.h>

/*
Faça um programa que leia dois inteiros e os imprime na tela.
*/

int main() {
    int n1;
    int n2;
    printf("Digite um numero inteiro: ");
    scanf("%d",&n1);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&n2);
    printf("Os numeros escolhidos pelo usuario sao: %d e %d",n1,n2);
    return 0;
}
