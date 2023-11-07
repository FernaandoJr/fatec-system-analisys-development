#include <stdio.h>

/*
Entrar com um número e imprimir se ele é igual a 20, menor ou
maior.
*/

int main() {
    float num;
    int centena;
    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num > 20){
        printf("numero selecionado e maior que 20");
    } else if(num < 20){
        printf("numero selecionado e menor que 20");
    } else{
        printf("numero selecionado e igual que 20");
    }
    return 0;
}
