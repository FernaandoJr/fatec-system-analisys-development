#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

// Constantes
enum {
    TAMANHO = 5,
    //FIM = false
};

// Variáveis
extern int fila[TAMANHO];
extern int inicio;
extern int fim;
extern bool vazia;

// Protótipos
bool adicionar(int valor);
void imprimir();

#endif