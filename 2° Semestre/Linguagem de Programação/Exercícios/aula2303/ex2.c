#include <stdio.h>
/*
 * Desenvolva um programa que gera a tabuada de qualquer número.
 * O usuário insere o número, e o programa imprime a tabuada.
 */
int main() {
    int num;
    printf("Digite um numero e darei sua tabuada: ");
    scanf("%d",&num);

    for (int i = 0; i < 10; ++i) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}