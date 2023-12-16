#include <stdio.h>

/*
Faça um programa que receba um número e verifique se ele é
par ou impar.
*/

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Par");
    } else{
        printf("Impar");
    }

    return 0;
    }
