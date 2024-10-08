#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Fila.h"

/*
NOMES:
FERNANDO DIVINO DE MORAES JUNIOR
LUIS FELIPE PIASENTINI

COMANDO PRA RODAR:
gcc -o main main.c ./Fila.c && main
ou rodar o main.exe
*/

// Constantes
enum {
    OP_NAO_SELECIONADA = 0,
        OP_RETIRARFILA,
        OP_ATENDERFILA,
        OP_SAIR
};

int menu();
int main() {
    inicializarFila();
    int opcao = OP_NAO_SELECIONADA;
    int senha = 0;
    srand(time(NULL));

    while (opcao != OP_SAIR) {
        opcao = menu();

        switch (opcao) {
        case OP_RETIRARFILA:
            senha = rand() % 50 + 1;

            if (ExisteNaFila(senha)) {
                system("cls");
                printf("Senha %d ja existe, retire outra senha!\n", senha);
            } else {
                if (!adicionar(senha)) {
                    system("cls");
                    printf("Fila cheia! Por favor espere!\n");
                } else {
                    system("cls");
                    printf("Senha gerada: %d\n", senha);
                }
            }
            break;
        case OP_ATENDERFILA:
            if (retirar(&senha)) {
                system("cls");
                printf("%d retirado da fila\n", senha);
            } else {
                system("cls");
                printf("Fila vazia\n");
            }
            break;
        case OP_SAIR:
            system("cls"); 
            break;
        default:
            system("cls"); 
            printf("Opcao invalida!\n");
        }
        if(opcao != 3){
            imprimir();
        }
    }

    return 0;
}

int menu() {
    int op = OP_NAO_SELECIONADA;
    printf("\n+=~------- Menu ------~=+\n");
    printf("| %d - Retirar senha\t|\n", OP_RETIRARFILA);
    printf("| %d - Atender fila\t|\n", OP_ATENDERFILA);
    printf("| %d - Sair\t\t|\n", OP_SAIR);
    printf("+=~-------------------~=+\n");
    printf("Digite sua opcao: ");
    scanf("%d", &op);

    return op;
}