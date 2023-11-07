#include <stdio.h>

/*
Faça um programa que verifica se um número é válido para a
seguinte regra: ele deve ser maior que zero e menor que 100.
*/

int main() {
    int num;

    printf("Digite um numero sendo maior que zero e menor que 100: ");
    scanf("%d", &num);

    if(num > 0 && num < 100){
        printf("Numero valido!");
    } else{
        printf("Numero invalido!");
    }
    return 0;
    }
