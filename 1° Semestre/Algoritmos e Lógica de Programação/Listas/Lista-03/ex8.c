#include <stdio.h>

/*
Ler o número de termos da série (n) e imprimir o valor de H
sendo: H = 1 + 1/2 + 1/3 + 1/4 ... + 1/n 
*/

int main () {
    int n;
    double result = 0.0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        result+= 1.0/i;
        printf("%lf ", result);
    }
    printf("Resultado: %f",result);
}