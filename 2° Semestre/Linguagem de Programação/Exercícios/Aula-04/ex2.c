#include <stdio.h>

/*
Desenvolva um programa que leia uma Série de números inteiros N
onde o programa deve calcular e apresentar a soma desses
números. A entrada de um valor 0 deve encerrar a leitura e 
iniciar o cálculo da soma.
*/
int main () {
    int input, i = 0;
    int soma = 0;
    printf("Digite uma série de números inteiros: (Digite 0 para sair) \n");
    do {
        scanf("%d",&input);
        if(input != 0){
            i++;
        }
        soma = soma + input;
    } while(input != 0);

    printf("Resultado da soma dos %d números: %d",i,soma);
    return 0;
}