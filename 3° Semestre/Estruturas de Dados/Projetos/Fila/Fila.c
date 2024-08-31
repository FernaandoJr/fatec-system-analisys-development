#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

// Variáveis
int fila[TAMANHO];
int inicio = 0;
int buffer;
int fim = 0;
int qtd_numeros = 0;
bool vazia = true;

// Funções
bool adicionar(int valor) {
    if (vazia) {
        fila[fim] = valor;
        vazia = false;
        fim++;
        qtd_numeros++;

        if (fim == TAMANHO) {
            fim = 0;
        }
    } else {
        if (inicio == fim) {
            printf("Fila Cheia!");
        }

        fila[fim] = valor;
        fim++;
        qtd_numeros++;
        if (fim == TAMANHO) {
            fim = 0;
        }

        buffer = fila[inicio];
        inicio++;

        if (inicio == TAMANHO) {
            inicio = 0;
        }
        if (inicio == fim) {
            vazia = true;
        }
        system("cls");
    }

    return true;
}

void imprimir() {
    system("cls");

    if (qtd_numeros == 0) {
        printf("Fila Vazia!\n");
    } else {
        printf("Tamanho da fila: %d\n", TAMANHO);
        printf("+=~- -~=+\n");

        if (qtd_numeros < TAMANHO) {
            qtd_numeros == TAMANHO;
            for (int i = 0; i < qtd_numeros; i++) {
                printf("|   %d\t|\n", fila[i]);
            }

        } else {
            for (int i = 0; i < TAMANHO; i++) {
                printf("|   %d\t|\n", fila[i]);
            }
        }

        printf("+=~- -~=+\n");
    }
}

int menu() {
    int op = OP_NAO_SELECIONADA;

    printf("\n+=~-   Menu  -~=+\n");
    printf("| %d - Adicionar\t|\n", OP_ADICIONAR);
    printf("| %d - Imprimir\t|\n", OP_IMPRIMIR);
    printf("| %d - Sair\t|\n", OP_SAIR);
    printf("\nOpcao: ");
    scanf("%d", & op);

    return op;
}