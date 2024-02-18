#include <stdio.h>

/*
Construa um programa que faça o seguinte:
• Leia 5 valores inteiros.
• Identifique e exiba o maior valor.
• Identifique e exiba o menor valor.
• Calcule e exiba a média dos números inseridos.
*/
int main () {
    int num, menor, maior = 0, media = 0, cont = 1;
    
    while (cont <= 5){
        printf("Digite uma sequencia de 5 numeros (numero %d): ",cont);
        scanf("%d", &num);
        media +=num;

        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
        cont++;
    }

    printf("Menor Número: %d\n",menor);
    printf("Maior Número: %d\n",maior);
    printf("Média: %d\n",media/5);
    return 0;
}