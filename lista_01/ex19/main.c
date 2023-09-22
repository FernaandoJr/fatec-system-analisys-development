#include <stdio.h>

int main () {
    float num, den, resultado;

    printf("Digite um valor para o numerador: ");
    scanf("%f", &num);
    printf("Digite um valor para o denominador: ");
    scanf("%f", &den);

    resultado = num / den;
    printf("Resultado: %f\n",resultado);
    return 0;
}