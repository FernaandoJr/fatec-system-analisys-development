#include <stdio.h>

int main() {
    int n1;
    int n2;
    int op;
    double resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    printf("Digite os operadores (* / + - ): ");
    scanf(" %c", &op);
    printf("Digite sua idade: ");
    scanf("%d", &n2);


    switch (op) {
        case '+':
            resultado = n1 + n2;
            break;
        case '-':
            resultado = n1 - n2;
            break;
        case '*':
            resultado = n1 * n2;
            break;
        case '/':
            resultado = n1 / n2;
            break;
        default:
            printf("Operador invalido!");
            break;
    }
    printf("Resultado da operacao: %.2f", resultado);
    return 0;
    }
