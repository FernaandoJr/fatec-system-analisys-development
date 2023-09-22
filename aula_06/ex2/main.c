#include <stdio.h>

int main() {
    int idade;
    int valor;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    switch (idade) {
        case 0 ... 18:
            valor = 10;
            break;
        default:
            valor = 15;
    }
    printf("Valor do ingresso: R$ %d", valor);
    return 0;
    }
