#include <stdio.h>

/*
Um restaurante cobra de seus clientes 10% da conta como
gorjeta para o garçom. Faça um programa que receba o valor
dos gastos, calcule a gorjeta e mostre na tela o valor inicial, a
gorjeta e o valor total da conta.
*/

int main () {
    float valor_total, gorjeta, valor_inicial;

    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &valor_inicial);

    gorjeta = 10;

    valor_total = valor_inicial * (gorjeta / 100) + valor_inicial;

    printf("\nGorjeta: %.f%%\n", gorjeta);
    printf("Valor Inicial: R$ %.2f\n", valor_inicial);
    printf("Valor Total: R$ %.2f\n", valor_total);
    return 0;
}