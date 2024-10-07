#ifndef FILAVETORES_H
#define FILAVETORES_H
#include <stdbool.h>

typedef struct {
    char nome[50];
    char endereco[50];
    long long int cpf;
    char email[50];
    char telefone[50];
} Pessoa;

enum {
    OP_NAO_SELECIONADA = 0,
    OP_ADICIONAR,
    OP_EXCLUIR,
    OP_ALTERAR,
    OP_IMPRIMIR,
    OP_IMPRIMIRTODOS,
    OP_ORDENAR,
    OP_SAIR
};

/**
 * @brief Exibe o menu de opções para o usuário.
 * 
 * @return int A opção selecionada pelo usuário.
 */
int menu();

/**
 * @brief Adiciona uma nova pessoa ao vetor de pessoas.
 * 
 * @param pessoas Vetor de pessoas.
 * @param quantidade Ponteiro para a quantidade atual de pessoas no vetor.
 * @return true Se a pessoa foi adicionada com sucesso.
 * @return false Se ocorreu um erro ao adicionar a pessoa.
 */
bool Adicionar(Pessoa *pessoas, int *quantidade);

/**
 * @brief Exclui uma pessoa do vetor de pessoas.
 * 
 * @param pessoas Vetor de pessoas.
 * @param quantidade Ponteiro para a quantidade atual de pessoas no vetor.
 * @return true Se a pessoa foi excluída com sucesso.
 * @return false Se ocorreu um erro ao excluir a pessoa.
 */
bool Excluir(Pessoa *pessoas, int *quantidade);

/**
 * @brief Altera os dados de uma pessoa no vetor de pessoas.
 * 
 * @param pessoas Vetor de pessoas.
 * @param quantidade Quantidade atual de pessoas no vetor.
 * @return true Se os dados da pessoa foram alterados com sucesso.
 * @return false Se ocorreu um erro ao alterar os dados da pessoa.
 */
bool Alterar(Pessoa *pessoas, int quantidade);

/**
 * @brief Imprime os dados de uma pessoa específica no vetor de pessoas.
 * 
 * @param pessoas Vetor de pessoas.
 * @param quantidade Quantidade atual de pessoas no vetor.
 * @return true Se os dados da pessoa foram impressos com sucesso.
 * @return false Se ocorreu um erro ao imprimir os dados da pessoa.
 */
bool Imprimir(Pessoa *pessoas, int quantidade);

/**
 * @brief Imprime os dados de todas as pessoas no vetor de pessoas.
 * 
 * @param pessoas Vetor de pessoas.
 * @param quantidade Quantidade atual de pessoas no vetor.
 * @return true Se os dados de todas as pessoas foram impressos com sucesso.
 * @return false Se ocorreu um erro ao imprimir os dados das pessoas.
 */
bool ImprimirTodos(Pessoa *pessoas, int quantidade);

/**
 * @brief Ordena o vetor de pessoas.
 * 
 * @param pessoas Vetor de pessoas.
 * @param quantidade Quantidade atual de pessoas no vetor.
 */
void Ordenar(Pessoa *pessoas, int quantidade);

/**
 * @brief Realiza as operações necessárias para sair do programa.
 */
void Sair();


#endif 