#include <stdio.h>

/*
Faça um programa que entre com o valor de um produto e uma
porcentagem de desconto e imprima o valor com desconto.
*/

int main () {
    float preco, desc, novo_preco, val_desc;
    printf("Digite o valor do produto: ");
    scanf("%f", &preco);

    printf("Digite a porcentagem de desconto que o produto terá: ");
    scanf("%f", &desc);
    
    val_desc = preco * (desc/100);
    novo_preco = preco - val_desc;

    printf("Preço original: %.f\n", preco);
    printf("Preço com desconto: %.f\n", novo_preco);

    return 0;
}