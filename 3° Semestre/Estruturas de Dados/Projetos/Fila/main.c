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
    OP_RETIRAR,
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
                if(!adicionar(numero))
                {
                    printf("Fila cheia!\n");
                }
                break;
            case OP_RETIRAR:
                if(retirar(&numero))
                {
                    printf("%d retirado da fila\n", numero);
                }
                else
                {
                    printf("Fila vazia\n");
                }
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

int menu()
{
    int op = OP_NAO_SELECIONADA;

    printf("Menu\n");
    printf("%d - Adicionar\n", OP_ADICIONAR);
    printf("%d - Retirar\n", OP_RETIRAR);
    printf("%d - Imprimir\n", OP_IMPRIMIR);
    printf("%d - Sair\n", OP_SAIR);
    printf("Digite sua opcao: ");
    scanf("%d", &op);

    return op;
}