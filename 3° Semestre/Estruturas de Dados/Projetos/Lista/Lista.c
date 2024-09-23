#include <stdio.h>
#include "Lista.h"

// Variáveis
int fila[TAMANHO];
int inicio = 0;
int fim = 0;
bool vazia = true;

// Funções
bool add(int valor) {
    if(fim == TAMANHO){
        return false;
    }
    fila[fim] = valor; 
    fim++;
}

void imprimir(){
    for(int i = 0; i < TAMANHO; i++){
        printf("| %d ", fila[i]);
    }
}

int searchByIndex(int valor){
    for(int i = 0; i < TAMANHO; i++){
        if(fila[i] == valor){
            return i;
        }
    }
    return -1;
}

int size(){
    int i;
    for(i; i < TAMANHO; i++){
    }
    return i;
}


bool ExisteNaFila(int senha) {
    for (int i = 0; i < TAMANHO; i++) {
        if (fila[i] == senha) {
            return true;
        }
    }
    return false;
}

int menu() {
    int op = OP_NAO_SELECIONADA;

    printf("\n+=~-       Menu      -~=+\n");
    printf("| %d - Add\t\t|\n", OP_ADD);
    printf("| %d - Imprimir\t\t|\n", OP_IMPRIMIR);
    printf("| %d - Tamanho\t\t|\n", OP_TAMANHO);
    printf("| %d - Procurar Index\t|\n", OP_SEARCHINDEX);
    printf("| %d - Procurar Valor\t|\n", OP_SEARCHVALUE);
    printf("| %d - Excluir\t\t|\n", OP_DELETE);
    printf("| %d - Organizar\t\t|\n", OP_SORT);
    printf("| %d - Setar\t\t|\n", OP_SET);
    printf("| %d - Expandir\t\t|\n", OP_EXPAND);
    printf("| %d - Sair\t\t|\n", OP_SAIR);
    printf("\nOpcao: ");
    scanf("%d", & op);

    return op;
}