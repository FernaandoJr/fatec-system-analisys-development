#include <stdio.h>

/*
Ler um número real e imprimir a terça parte dele.
*/

int main() {

    int n1;
    float resultado;

    printf("Digite um numero real: ");
    scanf("%d", &n1);

    resultado = n1/3;

    printf("Resultado = %.2f",resultado);
    return 0;
}
