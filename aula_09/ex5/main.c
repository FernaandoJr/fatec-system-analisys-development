#include <stdio.h>

/*
Faça um programa que calcule a soma dos n primeiros
números naturais.
*/

int main() {
    int n = 1;
    int soma = 0;
    int input;
    printf("Digite um numero: ");
    scanf("%d",&input);
    for (n; n < input + 1 ; ++n) {
        soma = soma + n;
    }
    printf("Soma dos primeiros %d numeros naturais consecutivos: %d",input,soma);
    return 0;
}