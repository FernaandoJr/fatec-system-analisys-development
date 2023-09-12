#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero sendo maior que zero e menor que 100: ");
    scanf("%d", &num);

    if(num > 0 && num < 100){
        printf("Numero valido!");
    } else{
        printf("Numero invalido!");
    }
    return 0;
    }
