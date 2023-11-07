#include <stdio.h>

/*
Faça um programa que indique se um número digitado está entre
20 e 90 ou não.
*/

int main () {
    int n1;
    printf("\nDigite um numero: ");
    scanf("%d", &n1);

    if(n1 > 20 && n1 < 90){
        printf("\nO número selecionado está entre 20 e 90!\n");
    } else{
        printf("\nO número selecionado não está entre 20 e 90!\n");
    }
    return 0;
}