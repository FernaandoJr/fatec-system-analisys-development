#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

// Constantes
enum {
    TAMANHO = 100
};

// Variáveis
extern int fila[TAMANHO];
extern int inicio;
extern int fim;

// Protótipos
bool adicionar(int valor);
bool retirar(int *valor);
void imprimir();

#endif