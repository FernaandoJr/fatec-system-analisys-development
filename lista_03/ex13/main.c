#include <stdio.h>

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