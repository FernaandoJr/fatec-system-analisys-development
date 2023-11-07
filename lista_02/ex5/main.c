#include <stdio.h>

/*
Ler um número com três dígitos e imprimir se o algarismo da
casa das centenas é par.
*/

int main() {
    float num;
    int centena;
    printf("Digite um numero com 3 digitos: ");
    scanf("%f", &num);

    centena = num / 100;

    if ((centena % 2) == 0){
        printf("Centena e par");
    } else{
        printf("Centena e impar");
    }
    return 0;
}
