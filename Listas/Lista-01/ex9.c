#include <stdio.h>

/*
Faça um programa que você entra com o saldo de uma
aplicação e o sistema calcula e imprime o novo saldo para um
rendimento de 3,5%.
*/

int main(){
    int salario;
    int novo_salario;
    printf("Digite seu salário: ");
    scanf("%d", &salario);
    novo_salario = salario * 1.035;
    
    printf("Seu novo salário é %d", novo_salario);
    return 0;
}