#include <stdio.h>

/*
Fazer um programa que leia dois números e imprima se eles
são iguais ou diferentes.
*/

int main() {
    float num;
    float num2;
    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    if(num == num2){
        printf("numeros selecionados sao iguais");
    } else{
        printf("numeros selecionados sao diferentes");
    }
    return 0;
}
