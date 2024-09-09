#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

// Constantes
enum {
    TAMANHO = 50
};

// Variáveis
extern int fila[TAMANHO];
extern int inicio;
extern int fim;
extern bool vazia;

// Protótipos
bool adicionar(int valor);
bool retirar(int *valor);
bool ExisteNaFila(int senha);
void imprimir();
#endif //FILACIRCULAR_FILACIRCULAR_H