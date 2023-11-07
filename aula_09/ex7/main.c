#include <stdio.h>

/*
Faça um programa que recebe um número entre 1 e 10
inclusive e faça uma contagem regressiva deste número até
zero.
*/

int main() {
    
    int n;

    printf("Digite um número entre 1 e 10: ");
    scanf("%d",&n);

        if (n <= 10) {
        while (n > 0) {
            printf(" %d ",n);
            n--;
        }
        printf(" %d ",n);
        } else{
            printf("Numero inválido!");
        }
    return 0;
}