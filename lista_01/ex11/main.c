#include <stdio.h>

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
