#include <stdio.h>

/*
Escreva um programa em C que imprima o tamanho (em bytes) dos tipos de
dados básicos: char, int, float, double e long double usando a função sizeof.
*/

int main () {
    char v_char;
    int v_int;
    float v_float;
    double v_double;
    long double v_long_double;
    int tamanho;

    tamanho = sizeof(v_char);
    printf("\nTamanho em bytes dos tipos de dados básicos:\n\n");
    printf("Char: %d\n",tamanho);
    tamanho = sizeof(v_int);
    printf("Inteiro: %d\n",tamanho);
    tamanho = sizeof(v_float);
    printf("Float: %d\n",tamanho);
    tamanho = sizeof(v_double);
    printf("Double: %d\n",tamanho);
    tamanho = sizeof(v_long_double);
    printf("Long Double: %d\n",tamanho);
    return 0;
}
