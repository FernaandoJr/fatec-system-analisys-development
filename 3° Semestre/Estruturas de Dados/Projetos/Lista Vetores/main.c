#include <stdio.h>
#include <stdlib.h>
#include "ListaVetores.h"

/*
NOMES:  
FERNANDO DIVINO DE MORAES JUNIOR
LUIS FELIPE PIASENTINI

COMANDO PARA COMPILAR:
gcc -o main main.c ./ListaVetores.c && main
*/

int main () {
    int opcao = OP_NAO_SELECIONADA;
    Pessoa pessoas[10];
    int quantidade = 0;

        system("cls");

    while (opcao != OP_SAIR){
        opcao = menu();
        switch (opcao){
            case OP_ADICIONAR:
            system("cls");
                if(Adicionar(pessoas, &quantidade)){
                    printf("Pessoa adicionada com sucesso!\n");
                } else {
                    printf("Erro ao adicionar pessoa!\n");
                }
                break;
            case OP_EXCLUIR:
            system("cls");
                if(Excluir(pessoas, &quantidade)){
                    printf("Pessoa excluida com sucesso!\n");
                } else {
                    printf("Erro ao excluir pessoa!\n");
                }
                break;
            case OP_ALTERAR:
            system("cls");
                if(Alterar(pessoas, quantidade)){
                    printf("Pessoa alterada com sucesso!\n");
                } else {
                    printf("Erro ao alterar pessoa!\n");
                }
                break;
            case OP_IMPRIMIR:
            system("cls");
                if(Imprimir(pessoas, quantidade)){
                    printf("Pessoa impressa com sucesso!\n");
                } else {
                    printf("Erro ao imprimir pessoa!\n");
                }
                break;
            case OP_IMPRIMIRTODOS:
            system("cls");
                if(ImprimirTodos(pessoas, quantidade)){
                    printf("Pessoas impressas com sucesso!\n");
                } else {
                    printf("Erro ao imprimir pessoas!\n");
                }
                break;
            case OP_ORDENAR:
            system("cls");
                Ordenar(pessoas, quantidade);
                printf("Pessoas ordenadas com sucesso!\n");
                break;
            case OP_SAIR:
            system("cls");
                Sair();
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    }

    return 0;
}