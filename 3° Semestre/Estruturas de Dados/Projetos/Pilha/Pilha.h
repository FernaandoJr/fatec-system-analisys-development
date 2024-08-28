#ifndef PILHA_H
#define PILHA_H
#include <stdbool.h>

enum {
    TAMANHO = 100,
    TAMANHO_STRING = 2
};

bool find(char letra, char *str);
void stringParaVetor(char *line, char vetor[][20], int tamanho);
void ResolverEquacao(char entrada[][20]);
bool PushOperador(char *valor);
bool PushNumero(double valor);
bool PopOperador(char *valor);
bool PopNumero(double *valor);
bool CheckOperadorVazio();
bool CheckNumeroVazio();
bool CheckPrecedencia(char operador1);

double MostrarResultado();

#endif // PILHA_H