#include <stdio.h>

int main () {
    float   prestacao,
            valor,
            taxa,
            tempo;

    printf("Digite o valor da prestação: ");
    scanf("%f", &valor);
    printf("Digite o valor da taxa: ");
    scanf("%f", &taxa);
    printf("Digite o valor o tempo (em meses): ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);

    printf("Valor resultante do atraso da prestação: %1.f",prestacao);
    return 0;
}