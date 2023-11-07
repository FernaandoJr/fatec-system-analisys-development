#include <stdio.h>

/*
Faça um programa que leia o numerador e o denominador de
uma fração e calcule seu valor decimal.
*/

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