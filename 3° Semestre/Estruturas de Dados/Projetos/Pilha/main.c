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
    
    char operadores[100] = {'\0'};
    char numeros[100] = {'\0'};

    limpaVetor(vec, 100);

    strcpy(exp,"((22 + 5) * 2) / 3");

    stringParaVetor(exp, vec, 100);

    for(int i = 0; i < 100 && (strcmp(vec[i], "") !=  0); i++){
        printf("%s\n", vec[i]);


        if(strchr(vec[i], '(') != NULL){
            count_operadores++;
            printf("abre parenteses\n");
            operadores[count_operadores] = vec[i];
        }
    }

    // for (int i = 0; i < 100; i++){
    //     printf("")
    // }
    




    

    return 0;
}