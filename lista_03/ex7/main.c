#include <stdio.h>

/*
Faça um programa aonde você entre com 10 números e no
final imprima qual foi o maior e qual foi o menor.
*/

int main () {
    int n, cont = 1, maior = 0, menor;

    while (cont <= 10){
        printf("Digite uma sequencia de 10 numeros (numero %d): ",cont);
        scanf("%d", &n);
        if(n > maior){
            maior = n;
        }
        if(n < menor){
            menor = n;
        }
        cont++;
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
}