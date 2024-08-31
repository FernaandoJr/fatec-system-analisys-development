#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

// Constantes
enum {
    TAMANHO = 5,
    //FIM = false
};

enum {
  OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_IMPRIMIR,
    OP_SAIR
};

// Variáveis
extern int fila[TAMANHO];
extern int inicio;
extern int fim;
extern bool vazia;

// Protótipos
bool adicionar(int valor);
void imprimir();
int menu();

#endif