#ifndef FILA_H
#define FILA_H
#include <stdbool.h>

// Constantes
enum {
    TAMANHO = 5
};

enum {
  OP_NAO_SELECIONADA = 0,
    OP_ADD,
    OP_IMPRIMIR,
    OP_TAMANHO,
    OP_SEARCHINDEX,
    OP_SEARCHVALUE,
    OP_DELETE,
    OP_SORT,
    OP_SET,
    OP_EXPAND,
    OP_SAIR
};

// Variáveis
extern int fila[TAMANHO];
extern int inicio;
extern int fim;
extern bool vazia;

// Protótipos
bool add(int valor);
bool retirar(int *valor);
bool ExisteNaFila(int senha);
void imprimir();
void inicializarFila();
int searchByIndex(int valor);
int size();
#endif //FILACIRCULAR_FILACIRCULAR_H