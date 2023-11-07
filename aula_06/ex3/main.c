#include <stdio.h>

/*
Faça um programa que seja uma calculadora. O usuário
digitará um inteiro, um char indicando a operação (+-/*) e outro
inteiro. Depois disso calcular e imprimir o resultado.
*/

int main() {
    int n1;
    int n2;
    int op;
    double resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite os operadores (* / + - ): ");
    scanf(" %c", &op);
    printf("Digite sua outro numero inteiro: ");
    scanf("%d", &n2);


    if(op == '+'){
        resultado = n1 + n2;
    } else if(op == '-'){
        resultado = n1 - n2;
    } else if(op == '*'){
        resultado = n1 * n2;
    } else if(op == '/'){
        resultado = n1 / n2;
    } else{
        printf("Operador invalido!");
    }
    printf("Resultado da operacao: %.f", resultado);
    return 0;
    }
