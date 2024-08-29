#include "Pilha.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/*
NOMES:  
FERNANDO DIVINO DE MORAES JUNIOR
LUIS FELIPE PIASENTINI

COMANDO:
cd $dir && gcc -o $fileNameWithoutExt ./main.c ./Pilha.c && $fileNameWithoutExt
*/

int main() {
    char expressao[100] = "";
    char vetor[100][20] = {
        '\0'
    };

    strcpy(expressao, "(5+5)*2*(10+39)");
    stringParaVetor(expressao, vetor, TAMANHO);

    printf("\nEXPRESSAO\n");
    printf("+-------+\n");
    for (int i = 0; i < 100 && (strcmp(vetor[i], "") != 0); i++) {
        printf("|   %s\t|\n", vetor[i]);
    }
    printf("+-------+\n");

    printf("\nExpressao: \n");
    for (int i = 0; i < 100 && (strcmp(vetor[i], "") != 0); i++) {
        printf("%s", vetor[i]);
    }

    ResolverEquacao(vetor);

    printf("\n\nResultado final: %.2lf\n", MostrarResultado());
    return 0;
}