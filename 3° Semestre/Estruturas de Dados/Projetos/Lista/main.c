#include <stdio.h>
#include "Lista.h"

/*
FERNANDO DIVINO DE MORAES JUNIOR
LUIS FELIPE PIASENTINI

gcc -o main main.c ./Fila.c && main
*/
int menu();
int main () {
    system("cls");
    int opcao = OP_NAO_SELECIONADA;
    int numero = 0;

    while (opcao != OP_SAIR) {
        opcao = menu();

        switch (opcao) {
        case OP_ADD:
            printf("Digite um numero: ");
            scanf("%d", & numero);
            if(add(numero)){
                system("cls");
                printf("Numero %d incluido na fila!\n", numero);
            } else {
                printf("Fila Cheia");
            }
            break;
        case OP_IMPRIMIR:
            imprimir();
            break;
        case OP_TAMANHO:
            printf("Tamanho da Lista: %d", size());
            break;
        case OP_SEARCHINDEX:
            printf("Digite um numero que deseja procurar: ");
            scanf("%d", & numero);
            if(searchByIndex(numero) == -1){
                printf("Nao existe nenhum numero %d na lista", numero);
            } else{
                printf("Indice do numero %d = %d", numero, searchByIndex(numero));
            }
            break;
        case OP_SAIR:
            break;
        default:
            printf("Opcao invalida!\n");
        }

    }



    return 0;
}