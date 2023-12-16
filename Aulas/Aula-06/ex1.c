#include <stdio.h>

/*
Faça um programa que pergunte a idade da pessoa e mostre
na tela o valor do ingresso: R$15,00 se for maior de idade e
R$10,00 se for menor.
*/

int main() {
    int idade;
    int valor;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        valor = 15;
    } else {
        valor = 10;
    }
    printf("Valor do ingresso: R$ %d", valor);
    return 0;
    }
