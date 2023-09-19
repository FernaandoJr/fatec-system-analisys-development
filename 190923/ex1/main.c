#include <stdio.h>

int main() {
    int idade;
    int valor;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        valor = 15;
    } else {
        valor = 10;
    }
    printf("Valor do ingresso: R$ %d", valor);
    return 0;
    }
