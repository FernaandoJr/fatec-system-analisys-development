#include <stdio.h>

int main() {
    int n1;
    int n2;
    int soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("Resultado: %d", soma);
    return 0;
}
