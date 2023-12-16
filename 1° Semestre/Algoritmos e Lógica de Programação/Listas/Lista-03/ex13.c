#include <stdio.h>

/*
Criar um programa aonde você seja capaz de digitar números
e tenha o fatorial deste número calculado e impresso. O
programa termina quando um valor menor do que 1 é digitado.
*/

int main () {
    int input;
    int resultado = 1;

    printf("Digite um numero: \n");
    scanf("%d",&input);

    for (input; input >= 1; input--) {
        resultado = resultado * input;
    }
    printf("\nResultado: %d", resultado);
    return 0;
}