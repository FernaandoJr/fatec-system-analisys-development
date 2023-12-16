#include <stdio.h>

/*
Escreva um programa em C que solicite um determinado
número de segundos e, em seguida, imprima quantas horas,
minutos e segundos ele representa.
*/

int main () {
    int segundos;
    int horas;
    int minutos;
    int resto;
    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d",horas,minutos,segundos);
    return 0;
}