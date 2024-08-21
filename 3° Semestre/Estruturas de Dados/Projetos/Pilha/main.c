#include "Pilha.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main (int argc, char *argv[]) {
    char exp[100] = "";
    char vec[100][20] = {'\0'};
    int count_operadores = 0;
    int count_numeros = 0;
    int count_exp = 0;
    char operadores[100][20] = {'\0'};
    char numeros[100][20] = {'\0'};

    limpaVetor(vec, 100);
    strcpy(exp,"((22 + 5) * 2) / 3");
    stringParaVetor(exp, vec, 100);

    // Cicla por toda a Expressão
    for(int posicao = 0; posicao < 100 && (strcmp(vec[posicao], "") !=  0); posicao++){
        printf("%s\n", vec[posicao]);
        

        // 1.2 Se o token for:

        // 1.2.1 Um número: coloque ele na pilha de valores.
        if(!(strchr(vec[posicao], '(') != NULL ||
            strchr(vec[posicao], ')') != NULL ||
            strchr(vec[posicao], '+') != NULL ||
            strchr(vec[posicao], '-') != NULL ||
            strchr(vec[posicao], '*') != NULL ||
            strchr(vec[posicao], '/') != NULL ||
            strchr(vec[posicao], ' ') != NULL   )){
                // guarda o numero na pilha e avança
                strcpy(numeros[count_numeros], vec[posicao]);
                count_numeros++;
        //1.2.2 Um abre parênteses  "(": coloque na pilha de operadores
        }else{
            
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //     if( strchr(vec[posicao], '(') != NULL ||
    //         strchr(vec[posicao], ')') != NULL || 
    //         strchr(vec[posicao], '+') != NULL ||
    //         strchr(vec[posicao], '-') != NULL ||
    //         strchr(vec[posicao], '*') != NULL ||
    //         strchr(vec[posicao], '/') != NULL ||
    //         strchr(vec[posicao], ' ') != NULL   ){

    //             // Um fecha parênteses ")"
    //             if(strchr(vec[posicao], ')') != NULL){
    //                 printf("fechou\n");

    //                 // Enquanto o elemento no topo da pilha de operadores não for um abre parênteses
    //                 while(!(strchr(vec[posicao], '(') != NULL)){
    //                     char operador;
    //                     // Retire o operador da pilha de operadores
    //                     strcpy(operadores[posicao--], "\0");
    //                 }
    //             }
    //             // guarda o operador na pilha e avança
    //             strcpy(operadores[count_operadores], vec[posicao]);
    //             count_operadores++;
    //     } else{
    //             // guarda o numero na pilha e avança
    //             strcpy(numeros[count_numeros], vec[posicao]);
    //             count_numeros++;
    //     }
    // }

    // mostra a pilha de numeros
    printf("\nNUMEROS:\n");
    for (int i = 0; i < 10; i++) {
        if (numeros[i][0] == '\0') {
            break;
        }
        printf("--%s\n", numeros[i]);
    }
    
    // mostra a pilha de operadores
    printf("\nOPERADORES:\n");
     for (int i = 0; i < 10; i++) {
        if (operadores[i][0] == '\0') {
            break;
        }
        printf("--%s\n", operadores[i]);
    }

    




    

    return 0;
}