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
        if(fila[i] != -9999999){
            printf("| %d |", fila[i]);
        }
    }
    if(fila[0] ==  -9999999){
        printf("Fila Vazia!\n");
    }
}

int searchByIndex(int valor){
    for(int i = 0; i < TAMANHO; i++){
        if(valor == i){
            return fila[i];
        }
    }
    return -1;
}

int size(){
    int i = 0;
    int contador = 0;
    for(i; i < TAMANHO; i++){
        if(fila[i] != -9999999){
            contador++;
        }    
    }
    return contador;
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


void inicializarFila() {
    for (int i = 0; i < TAMANHO; i++) {
        fila[i] = -9999999;
    }
}

int searchByValue(int valor){
    int i = 0;
    for(i; i < TAMANHO; i++){
        if(fila[i] == valor){
            return i;
        }    
    }
    return -1;
}
// Função para deletar um elemento baseado no índice
bool deleteByIndex(int index) {
    if (index < 0 || index >= TAMANHO) {
        return false; // Índice inválido
    }
    
    for (int i = index; i < TAMANHO - 1; i++) {
        fila[i] = fila[i + 1];
    }
    
    fila[TAMANHO - 1] = -9999999; // Definir o último elemento como valor padrão
    return true;
}