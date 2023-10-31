#include <stdio.h>
#include <math.h>

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