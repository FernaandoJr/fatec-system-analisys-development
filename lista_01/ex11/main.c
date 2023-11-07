#include <stdio.h>

/*
Sabendo que 100 quilowatts de energia custa um sétimo de
um salário mínimo, faça um programa que receba o valor do
salário mínimo e a quantidade de quilowatts gasta em uma
residência e imprima:

▪ O valor em Reais do quilowatt
▪ O valor em Reais a ser pago
▪ O valor a ser pago com 10% de desconto
*/

int main () {

    float salario, custo, kw;
    printf("Digite o valor do salário minimo: ");
    scanf("%f", &salario);

    printf("Digite a quantidade de quilowatts gasta: ");
    scanf("%f", &kw);

    custo = salario / 7 / 100;

    printf("valor em reais de 1 KW: %.2f\n", custo);
    printf("Valor a ser pago é : %.2f\n", custo * kw);
    printf("Valor a ser pago com desconto de 10%% é: %.2f\n", (custo * kw) * .90);
    return 0;
}
