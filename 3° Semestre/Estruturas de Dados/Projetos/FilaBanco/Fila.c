#include <stdio.h>
#include "Fila.h"

// Variáveis
int fila[TAMANHO];
int inicio = 0;
int fim = 0;
bool vazia = true;

// Funções
bool adicionar(int valor) {
    if (vazia) {
        vazia = false;
    } else {
        if (inicio == fim) {
            return false;
        }
    }
    fila[fim] = valor;
    fim++;
    if (fim == TAMANHO) {
        fim = 0;
    }
    return true;
}

bool retirar(int * valor) {
    if (vazia) {
        return false;
    }
    * valor = fila[inicio];
    inicio++;
    if (inicio == TAMANHO) {
        inicio = 0;
    }
    if (inicio == fim) {
        vazia = true;
    }
    return true;
}

void imprimir() {
    int i;
    if (!vazia) {
        printf("\nFila atual: \n");
        printf("| ");
        i = inicio;
        do {
            printf("%d | ", fila[i]);
            i++;
            if (i == TAMANHO) {
                i = 0;
            }
        } while (i != fim);

        printf("\n");
    }
}

bool ExisteNaFila(int senha) {
    for (int i = 0; i < TAMANHO; i++) {
        if (fila[i] == senha) {
            return true;
        }
        return false;
    }
}