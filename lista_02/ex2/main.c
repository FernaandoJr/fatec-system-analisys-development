#include <stdio.h>

/*
Ler um número e imprimir se ele é positivo, negativo ou nulo.
*/

int main() {
    float n;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if(n > 0){
        printf("Numero selecionado e positivo");
    } else if(n < 0){
        printf("Numero selecionado e negativo");
    } else{
        printf("Numero selecionado e nulo");
    }
    return 0;
}
