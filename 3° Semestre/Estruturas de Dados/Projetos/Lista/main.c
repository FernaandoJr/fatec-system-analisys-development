#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

/*
gcc -o main main.c ./Lista.c && main
*/
int menu();
int main () {
    system("cls");
    inicializarFila();
    int opcao = OP_NAO_SELECIONADA;
    int numero = 0;
    int index;

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
                system("cls");
                printf("Fila Cheia");
            }
            break;
        case OP_IMPRIMIR:
            system("cls");
            printf("Fila Atual:\n");
            imprimir();
            break;
        case OP_TAMANHO:
            system("cls");
            printf("Tamanho da Lista: %d\n", size());
            break;
        case OP_SEARCHINDEX:
            printf("Digite o indice que deseja procurar: ");
            scanf("%d", &numero);
            if(searchByIndex(numero) == -1){
                system("cls");
                printf("Indice vazio ou indisponivel!\n", numero);
            } else{
                system("cls");
                printf("Indice %d = %d", numero, searchByIndex(numero));
            }
            break;
        case OP_SEARCHVALUE:
            printf("Digite um numero que deseja procurar: ");
            scanf("%d", &numero);
            if(searchByValue(numero) == -1){
                system("cls");
                printf("Valor nao encontrado na lista!\n");
            } else{
                system("cls");
                printf("Indice do valor %d = %d", numero, searchByValue(numero));
            }
            break;
        case OP_DELETE:
            printf("Digite o indice que deseja excluir: ");
            scanf("%d", &numero);
            system("cls");
            if(!deleteByIndex(numero)){
                printf("Indice nao existe!\n");
            } else{
                printf("Fila alterada!\n");
                imprimir();
            }
            break;
        case OP_SORT:
            system("cls");
            printf("Fila organizada em ordem crescente!\n");
            sort();
            break;
        case OP_SET:
            printf("Digite o Indice que deseja alterar: ");
            scanf("%d", &index);
            printf("Digite o novo valor do Indice %d: ", index);
            scanf("%d", &numero);
            system("cls");
            if(set(index, numero)){
                printf("numero alterado com sucesso!\n");
                imprimir();
            } else{
                printf("Indice invalido ou não existente\n");
                imprimir();
            }
            break;
        case OP_EXPAND:
            printf("Digite o tamanho novo desejado: ");
            scanf("%d", &numero);
            system("cls");
            if(expand(numero)){
                printf("Nova memória alocada!\n");
                tudo_imprimir();
            } else{
                printf("erro\n");
                tudo_imprimir();
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