#include <stdio.h>

/*
Faça um programa que receba um valor inicial e um final e calcule a soma e a média de todos os números do intervalo.
*/

int main () {
    int val_ini;
    int val_final;
    int i;
    int cont;
    int soma = 0;
    int vezes = 0;

    while (val_ini > val_final){
        printf("Digite um valor inicial:\n");
        scanf("%d",&val_ini);
    
        printf("\nDigite um valor final:\n");
        scanf("%d",&val_final);

        if(val_final < val_ini){
            printf("Tente Novamente!\n\n");
        }
    }
    cont = val_ini;

    for (cont; cont <= val_final; cont++) {
        soma = soma + cont;
        vezes++;
    }
    printf("Soma= %d",soma);
    printf("\nMedia= %.2f",(float)soma/vezes);
    return 0;
}