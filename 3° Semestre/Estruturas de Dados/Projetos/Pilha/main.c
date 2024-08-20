#include "Pilha.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[]) {
    char exp[100] = "";
    char vec[100][20] = {'\0'};

    limpaVetor(vec, 100);

    strcpy(exp,"((22 + 5) * 2) / 3");

    stringParaVetor(exp, vec, 100);

    printf("ou");
    return 0;
}