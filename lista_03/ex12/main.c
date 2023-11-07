#include <stdio.h>
#include <math.h>

/*
Faça um programa que calcula a raiz quadrada de um número
a ser digitado. O programa deve proteger a digitação deste
número não aceitando números negativos.
*/

int main () {
    int n;
    float resultado;


    printf("\nDigite um numero:  \n");
    scanf("%d", &n);

    if (n > 0) {
        resultado = sqrt(n); 
        printf("Resultado: %f", resultado);
    } else{
        printf("Numero invalido!");   
    }
    return 0;
}