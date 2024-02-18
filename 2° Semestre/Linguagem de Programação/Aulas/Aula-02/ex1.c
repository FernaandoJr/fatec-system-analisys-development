#include <stdio.h>

/*
Escreva um programa que leia a idade de um cliente e determine o
desconto em uma compra. Se a idade for menor que 18 anos, ele recebe 5% de
desconto. Se tiver entre 18 e 60 anos, recebe 10% de desconto. Se for maior que 60
anos, recebe 15% de desconto. Use a estrutura if-else.
coração

*/

int main () {
    int idade;
    int desconto; 
    

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade < 18){
        desconto = 5;
    } else if(idade > 60){
        desconto = 15;
    } else if(idade > 18 || idade < 60){
        desconto = 10;
    }

    printf("Desconto aplicado foi de: %d%%",desconto);
    return 0;
}