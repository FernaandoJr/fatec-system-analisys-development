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

void tudo_imprimir(){
    printf("toda a lista:");
    for(int k = 0; k < TAMANHO; k++){
         printf(" %d ", fila[k]);
    }
    printf("\n");
}

bool imprimir(){
    for(int i = 0; i < TAMANHO; i++){
        if(fila[i] != MAXINTEGER){
            printf("| %d |", fila[i]);
        }
    }
    return true;
    
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
        if(fila[i] != MAXINTEGER){
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
        fila[i] = MAXINTEGER;
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
    
    fila[TAMANHO - 1] = MAXINTEGER; // Definir o último elemento como valor padrão
    fim--;
    return true;
}

void sort(){
    int aux;
    for(int i = 0; i < TAMANHO-1; i++){
        for(int j = i+1; j < TAMANHO; j++){
            if(fila[i] > fila[j]){
                aux = fila[i];
                fila[i] = fila[j];
                fila[j] = aux;
            }
        }
    }
    imprimir();
}

bool set(int index, int valor){
    if(index <= TAMANHO){
        fila[index] = valor;
        return true;
    }
    return false;
};

bool expand(int tamanho){
    int *nova_lista = malloc(tamanho * sizeof(int));
    if(!nova_lista)
    {
        printf("Erro de alocacao!");
        exit(-1);
    }
    free(nova_lista);
    for(int i = 0; i < TAMANHO; i++) {
        nova_lista[i] = fila[i];
    }
    *fila = nova_lista;
    return true;
}