#include <stdio.h>

/*
Ler dois números reais e imprimir a média aritmética deles
*/

int main() {

    int n1;
    int n2;
    int media;

    printf("Digite um numero real: ");
    scanf("%d", &n1);

    printf("Digite outro numero real: ");
    scanf("%d", &n2);

    media = (n1 + n2) /2;

    printf("media eh %d", media);
    return 0;
}
