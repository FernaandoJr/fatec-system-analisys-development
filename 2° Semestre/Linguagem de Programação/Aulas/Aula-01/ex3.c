#include <stdio.h>

/*
Crie um programa que leia dois caracteres do usuário usando a função
scanf(). Em seguida, exiba os caracteres lidos entre aspas simples, assim
como no exemplo fornecido anteriormente.
*/

int main () {
    char fir_char, sec_char;

    printf("\nDigite o primeiro caractere: ");
    scanf(" %c",&fir_char);
    printf("\nDigite o segundo caractere: ");
    scanf(" %c",&sec_char);

    printf("\nCaracteres lidos foram \'%c\' e \'%c\'",fir_char,sec_char);

    return 0;
}