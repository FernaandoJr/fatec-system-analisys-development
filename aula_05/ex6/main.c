#include <stdio.h>

/*
Faça um programa que verifique se é possível calcular sua raiz
quadrada.
*/

int main() {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n > 0 ){
        printf("Numero valido para calcular uma raiz quadrada!");
    } else{
        printf("Numero nao eh valido para calcular uma raiz quadrada!");
    }
    return 0;
    }
