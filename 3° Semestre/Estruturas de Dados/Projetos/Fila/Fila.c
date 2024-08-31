#include <stdio.h>
#include "Fila.h"

// Variáveis
int fila[TAMANHO];
int inicio = 0;
int buffer;
int fim = 0;
int qtd_numeros = 0;
bool vazia = true;

// Funções
bool adicionar(int valor){
    if(vazia){
        fila[fim] = valor;
        vazia = false;
        fim++;
        qtd_numeros++;

        if(fim == TAMANHO){
            fim = 0;
        }    
    } else{
        if(inicio == fim){
            printf("Fila Cheia!");
        }
        fila[fim] = valor;
        fim++;
        qtd_numeros++;
        if(fim == TAMANHO){
            fim = 0;
        }

        buffer = fila[inicio];
        inicio++;
        qtd_numeros++;

        if (inicio == TAMANHO){
            inicio = 0;
        }
        if(inicio == fim){
            vazia = true;
        }

    }

    return true;
}

void imprimir(){
    printf("+=~- -~=+\n");

    if(qtd_numeros >= TAMANHO){
        qtd_numeros == TAMANHO;
        for(int i = 0; i < qtd_numeros; i++){
        printf("|   %d\t|\n", fila[i]);
    }

    } else{
        for(int i = 0; i < qtd_numeros; i++){
        printf("|   %d\t|\n", fila[i]);
    }
    }
    
    printf("+=~- -~=+\n");
}