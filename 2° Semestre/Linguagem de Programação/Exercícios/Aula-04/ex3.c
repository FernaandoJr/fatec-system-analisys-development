#include <stdio.h>
/*
Escreva um programa que receba 10 números inteiros do usuário e
conte quantos desses números são pares.]
*/

int main () {
    int num;
    int par = 0;

    for(int i = 1; i <= 10;i++){
        printf("%d. Digite um número inteiro: ",i);
        scanf("%d",&num);
        if(num % 2 == 0){
            par++;
        }
    }
    printf("Dentre os 10 números, %d foram pares!",par);
    return 0;
}