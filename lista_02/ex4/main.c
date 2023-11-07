#include <stdio.h>

/*
A prefeitura de uma cidade resolveu criar uma linha de crédito
aos seus servidores. A regra é que a prestação não pode
ultrapassar 30% do salário bruto. Faça um programa que
recebe o valor do salário bruto e o valor da prestação e indique
se é ou não possível o empréstimo.
*/

int main() {
    float salario;
    float prest;
    printf("Digite o valor do seu salario bruto: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prest);

    if(prest > (.3 * salario)){
        printf("nao foi possivel o imprestimo!");
    } else{
        printf("foi possivel o imprestimo!");
    }
    return 0;
}
