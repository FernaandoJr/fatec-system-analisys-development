#include "ListaVetores.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int menu(){
    int op = OP_NAO_SELECIONADA;
    printf("| %d - Adicionar\t\t|\n", OP_ADICIONAR);
    printf("| %d - Excluir\t\t|\n", OP_EXCLUIR);
    printf("| %d - Alterar\t\t|\n", OP_ALTERAR);
    printf("| %d - Imprimir\t\t|\n", OP_IMPRIMIR);
    printf("| %d - Imprimir Todos\t|\n", OP_IMPRIMIRTODOS);
    printf("| %d - Ordenar\t\t|\n", OP_ORDENAR);
    printf("| %d - Sair\t\t|\n", OP_SAIR);
    printf("\nOpcao: ");
    scanf("%d", &op);
    return op;
}

bool Adicionar(Pessoa *pessoas, int *quantidade){
    long long int cpf;
    printf("Digite o CPF: ");
    scanf("%lld", &cpf);
    for (int i = 0; i < *quantidade; i++) {
        if (pessoas[i].cpf == cpf) {
            printf("CPF ja cadastrado!\n");
            return false;
        }
    }

    getchar(); // Limpar o buffer do stdin

    pessoas[*quantidade].cpf = cpf;
    printf("Digite o nome: ");
    fgets(pessoas[*quantidade].nome, sizeof(pessoas[*quantidade].nome), stdin);
    pessoas[*quantidade].nome[strcspn(pessoas[*quantidade].nome, "\n")] = '\0';

    printf("Digite o endereco: ");
    fgets(pessoas[*quantidade].endereco, sizeof(pessoas[*quantidade].endereco), stdin);
    pessoas[*quantidade].endereco[strcspn(pessoas[*quantidade].endereco, "\n")] = '\0';

    printf("Digite o email: ");
    fgets(pessoas[*quantidade].email, sizeof(pessoas[*quantidade].email), stdin);
    pessoas[*quantidade].email[strcspn(pessoas[*quantidade].email, "\n")] = '\0';

    printf("Digite o telefone: ");
    fgets(pessoas[*quantidade].telefone, sizeof(pessoas[*quantidade].telefone), stdin);
    pessoas[*quantidade].telefone[strcspn(pessoas[*quantidade].telefone, "\n")] = '\0';

    (*quantidade)++;
    return true;
}

bool Excluir(Pessoa *pessoas, int *quantidade){
    long long int cpf;
    printf("Digite o CPF: ");
    scanf("%lld", &cpf);
    for (int i = 0; i < *quantidade; i++) {
        if (pessoas[i].cpf == cpf) {
            for (int j = i; j < *quantidade - 1; j++) {
                pessoas[j] = pessoas[j + 1];
            }
            *quantidade -= 1;
            return true;
        }
    }
    return false;
}

bool Alterar(Pessoa *pessoas, int quantidade){
    long long int cpf;
    printf("Digite o CPF: ");
    scanf("%lld", &cpf);
    getchar(); // Limpar o buffer do stdin

    for (int i = 0; i < quantidade; i++) {
        if (pessoas[i].cpf == cpf) {
            printf("Digite o novo nome (ou pressione ENTER para manter o atual): ");
            char nome[50];
            fgets(nome, sizeof(nome), stdin);
            if (nome[0] != '\n') {
                nome[strcspn(nome, "\n")] = '\0';
                strcpy(pessoas[i].nome, nome);
            }

            printf("Digite o novo endereco (ou pressione ENTER para manter o atual): ");
            char endereco[50];
            fgets(endereco, sizeof(endereco), stdin);
            if (endereco[0] != '\n') {
                endereco[strcspn(endereco, "\n")] = '\0';
                strcpy(pessoas[i].endereco, endereco);
            }

            printf("Digite o novo email (ou pressione ENTER para manter o atual): ");
            char email[50];
            fgets(email, sizeof(email), stdin);
            if (email[0] != '\n') {
                email[strcspn(email, "\n")] = '\0';
                strcpy(pessoas[i].email, email);
            }

            printf("Digite o novo telefone (ou pressione ENTER para manter o atual): ");
            char telefone[15];
            fgets(telefone, sizeof(telefone), stdin);
            if (telefone[0] != '\n') {
                telefone[strcspn(telefone, "\n")] = '\0';
                strcpy(pessoas[i].telefone, telefone);
            }
            return true;
        }
    }
    printf("CPF nao cadastrado.\n");
    return false;
}

bool Imprimir(Pessoa *pessoas, int quantidade){
    long long int cpf;
    printf("Digite o CPF: ");
    scanf("%lld", &cpf);
    for (int i = 0; i < quantidade; i++) {
        if (pessoas[i].cpf == cpf) {
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Endereco: %s\n", pessoas[i].endereco);
            printf("Email: %s\n", pessoas[i].email);
            printf("Telefone: %s\n", pessoas[i].telefone);
            return true;
        }
    }
    printf("CPF nao cadastrado!\n");
    return false;
}

bool ImprimirTodos(Pessoa *pessoas, int quantidade) {
    if (quantidade == 0) {
        printf("Nenhuma pessoa cadastrada.\n");
        return false;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("CPF: %lld\n", pessoas[i].cpf);
        printf("Email: %s\n", pessoas[i].email);
        printf("Telefone: %s\n", pessoas[i].telefone);
        printf("\n");
    }
    return true;
}

void Ordenar(Pessoa *pessoas, int quantidade){
    if(quantidade == 0){
        printf("Nenhuma pessoa cadastrada.\n");
        return;
    }
    for (int i = 0; i < quantidade - 1; i++) {
        for (int j = i + 1; j < quantidade; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                Pessoa aux = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = aux;
            }
        }
    }
    printf("Pessoas ordenadas com sucesso!\n");
}

void Sair(){
    printf("Saindo...\n");
}