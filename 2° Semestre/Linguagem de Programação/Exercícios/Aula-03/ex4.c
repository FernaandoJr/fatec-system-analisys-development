#include <stdio.h>

/*
Escreva um programa que leia a hora atual (um número de 0 a 23) e
determine se é manhã (5 a 11), tarde (12 a 17), noite (18 a 22) 
ou madrugada (23 a 4). Use o operador ternário ? :
*/

int main () {
    int hora;

    printf("Digite um horário (0 a 23): ");
    scanf("%d",&hora);
    hora >= 5 && hora <= 11 ? printf("Manhã") : hora >= 12 && hora <= 17 ? printf("Tarde") : hora >= 18 && hora <= 22 ? printf("Noite") : printf("Madrugada");
    return 0;
}