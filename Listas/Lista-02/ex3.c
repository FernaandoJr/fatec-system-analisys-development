#include <stdio.h>

/*
Ler um número e imprimir se ele é ou não múltiplo de 3.
*/

int main() {
    int n;
    float resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if((n % 3) == 0){
        printf("Numero selecionado e multiplo de 3");
    } else{
        printf("Numero selecionado  nao e multiplo de 3");
    }
    return 0;
}
