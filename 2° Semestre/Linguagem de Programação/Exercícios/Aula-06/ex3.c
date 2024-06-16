#include <stdio.h>
#include <string.h>

/*
Crie uma função que receba uma string e retorne sua versão invertida.
*/

void InversorString(char *string){
    int tamanho = strlen(string);
    for(int i = 0, j = tamanho - 1;i <= j; i++, j--){
        char c = string[i];
        string[i] = string[j];
        string[j] = c;
    }
}

int main (int argc, char *argv[]) {
    char string[100] = "Fernando Divino";

    printf("String original: %s\n",string);
    InversorString(string);
    printf("String invertida: %s", string);
    return 0;
}

