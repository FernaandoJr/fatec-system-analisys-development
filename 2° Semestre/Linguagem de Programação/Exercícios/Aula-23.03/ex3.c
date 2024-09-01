#include <stdio.h>
/*
Faça um programa que calcula a média de uma quantidade indefinida de números inseridos pelo usuário.
O processo termina quando o usuário digitar um número negativo.
 */
int main() {
    int num = 1;
    float media = 0;
    int i = 0;
    printf("digite uma serie de numeros e direi sua media (digite um numero negativo para sair do loop)\n");
    while(num > 0){
        printf("Digite: ");
        scanf("%d",&num);
        if(num < 0){
            return 0;
        }
        media += num * 1.0;
        i++;
        printf("media: %.2f\n", media/i *1.0);
    }
    return 0;
}