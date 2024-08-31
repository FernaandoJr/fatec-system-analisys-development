#include <stdio.h>
#include "Fila.h"

/*
NOMES:
FERNANDO DIVINO DE MORAES JUNIOR
LUIS FELIPE PIASENTINI

COMANDO:
cd $dir && gcc -o $fileNameWithoutExt ./main.c ./Fila.c && $fileNameWithoutExt
*/

enum {
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_IMPRIMIR,
    OP_SAIR
};

int main () {
    int opcao = OP_NAO_SELECIONADA;
    int numero = 0;

    while(opcao != OP_SAIR){

        opcao = menu();


         switch(opcao)
        {
            case OP_ADICIONAR:
                printf("Digite um numero: ");
                scanf("%d", &numero);
                adicionar(numero);
                break;
            case OP_IMPRIMIR:
                imprimir();
                break;
            case OP_SAIR:
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }
    

    return 0;
}

int menu(){
    int op = OP_NAO_SELECIONADA;

    printf("\n +=~- Menu -~=+\n");
    printf("| %d - Adicionar\t|\n", OP_ADICIONAR);
    printf("| %d - Imprimir\t|\n", OP_IMPRIMIR);
    printf("| %d - Sair\t|\n", OP_SAIR);
    printf("Opcao: ");
    scanf("%d", &op);

    return op;
}