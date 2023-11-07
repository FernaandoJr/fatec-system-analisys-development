#include <stdio.h>

/*
Entrar com um número e informar se ele é divisível por 3 e por 7.
*/

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0){
        printf("Numero divisivel por 3 e 7!\n");
    } else{
        printf("Numero nao divisivel por 3 e 7!\n");
    }
    return 0;
    }
