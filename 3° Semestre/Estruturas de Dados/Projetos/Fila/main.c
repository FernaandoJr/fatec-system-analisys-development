#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

/*
NOMES:
FERNANDO DIVINO DE MORAES JUNIOR
LUIS FELIPE PIASENTINI

COMANDO PRA RODAR:
gcc -o main main.c ./Fila.c && main

PROBLEMA:
O problema que temos que atacar é que vamos 
reaproveitar os espaços de quem saiu da fila.

Isto gera um problema, pois o início e o fim da fila 
vão girar no vetor e assim o início e o fim do vetor 
não indicam fila vazia, fila cheia ou que não cabe 
mais nada nela.

Também quando a variável inicio for igual a variável 
fim não quer dizer nem cheia e nem vazia.
*/

int main() {
    system("cls");
    int opcao = OP_NAO_SELECIONADA;
    int numero = 0;

    while (opcao != OP_SAIR) {
        opcao = menu();

        switch (opcao) {
        case OP_ADICIONAR:
            printf("Digite um numero: ");
            scanf("%d", & numero);
            adicionar(numero);
            system("cls");
            printf("Numero %d incluido na fila!\n", numero);
            break;
        case OP_IMPRIMIR:
            imprimir();
            break;
        case OP_SAIR:
            break;
        default:
            printf("Opcao invalida!\n");
        }

    }

    return 0;
}