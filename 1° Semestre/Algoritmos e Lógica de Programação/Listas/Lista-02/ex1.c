#include <stdio.h>

/*
Ler um número e se ele for maior que 20, então imprimir a
metade do número.
*/

int main() {
    float n;
    float resultado;
    printf("Digite um numero: ");
    scanf("%f", &n);
    if(n > 20){
        resultado = n / 2;
        printf("Metado do numero selecionado: %2.f", resultado);
    } else{
        printf("Numero selecionado: %2.f", n);
    }
    return 0;
}
