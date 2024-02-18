#include <stdio.h>
/*
Crie um programa que solicite ao usuário que insira um numero de 1 a
7 e exiba o dia da semana correspondente (1 para Domingo, 2 para Segunda-
feira, etc.). Se o usuário inserir um numero fora desse intervalo, exiba uma
mensagem de erro. Use a estrutura switch.
*/

int main () {
    int input_dia;

    printf("Digite um um numero de 1 a 7 (1 para Domingo, 2 para Segunda-feira, etc.): ");
    scanf("%d",&input_dia);

    if(input_dia < 1 || input_dia > 7){
        printf("Erro! Tente novamente.");
    }
    switch (input_dia){
        case 1:
            printf("\nDia da semana escolhido: Domingo\n");
        break;
        case 2:
            printf("\nDia da semana escolhido: Segunda-feira\n");
        break;
        case 3:
            printf("\nDia da semana escolhido: Terça-feira\n");
        break;
        case 4:
            printf("\nDia da semana escolhido: Quarta-feira\n");
        break;
        case 5:
            printf("\nDia da semana escolhido: Quinta-feira\n");
        break;
        case 6:
            printf("\nDia da semana escolhido: Sexta-feira\n");
        break;
        case 7:
            printf("\nDia da semana escolhido: Sábado\n");
        break;
    }
    return 0;
}