#include <stdio.h>

/*
Desenvolva um programa que leia a nota final de um aluno (de 0 a 100) 
e determine sua classificação:
• Abaixo de 40: Reprovado
• 40 a 59: Suficiente
• 60 a 79: Bom
• 80 a 89: Muito Bom
• 90 a 100: Excelente 
Use a estrutura if-else para determinar a classificação.
*/

int main () {
    int nota_final;

    printf("Digite sua nota final (0 a 100): ");
    scanf("%d",&nota_final);

    if(nota_final < 40){
        printf("Situação: Reprovado");
    } else if(nota_final >= 40 && nota_final <= 59){
        printf("Situação: Suficiente");
    } else if(nota_final >= 60 && nota_final <= 79){
        printf("Situação: Bom");
    } else if(nota_final >= 80 && nota_final <= 89){
        printf("Situação: Muito Bom");
    } else if(nota_final >= 90 && nota_final <= 100){
        printf("Situação: Excelente");
    }
    return 0;
}