#include "Pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char pilha_operador[TAMANHO][TAMANHO_STRING];
double pilha_numero[TAMANHO];
int posicao_operador = 0;
int posicao_numero = 0;

void ResolverEquacao(char entrada[][20]) {
    double numero;
    char operador;
    double resultado = 0;
    int i = 0;

    while (entrada[i][0] != '\0') {
        if (entrada[i][0] == '(') {
            PushOperador(entrada[i]);
            i++;
        } else if (!CheckPrecedencia(entrada[i][0]) && entrada[i][0] != ')') {
            if (isdigit(entrada[i][0])) {
                numero = atof(entrada[i]);
                PushNumero(numero);
            } else if (entrada[i][0] == '/') {
                if (isdigit(entrada[i + 1][0])) {
                    PopNumero( & numero);
                    numero = numero / atof(entrada[i + 1]);
                    PushNumero(numero);
                    i++;
                } else {
                    PushOperador(entrada[i]);
                }
            } else {
                if (isdigit(entrada[i + 1][0])) {
                    PopNumero( & numero);
                    numero = numero * atof(entrada[i + 1]);
                    PushNumero(numero);
                    i++;
                } else {
                    PushOperador(entrada[i]);
                }
            }
            i++;
        } else if (CheckPrecedencia(entrada[i][0])) {
            PushOperador(entrada[i]);
            i++;
        } else if (entrada[i][0] == ')') {
            while (!CheckOperadorVazio() && pilha_operador[posicao_operador - 1][0] != '(') {
                PopOperador( & operador);
                if (operador == '+') {
                    PopNumero( & numero);
                    resultado = numero;
                    PopNumero( & numero);
                    resultado = resultado + numero;
                    PushNumero(resultado);
                } else {
                    PopNumero( & numero);
                    resultado = 0;
                    resultado = numero;
                    PopNumero( & numero);
                    resultado = numero - resultado;
                    PushNumero(resultado);
                }
            }
            PopOperador( & operador);
            i++;
        } else {
            i++;
        }
    }

    while (!CheckOperadorVazio()) {
        PopOperador( & operador);
        if (CheckPrecedencia(operador)) {
            if (operador == '+') {
                PopNumero( & numero);
                resultado = numero;
                PopNumero( & numero);
                resultado += numero;
                PushNumero(resultado);
            } else {
                PopNumero( & numero);
                resultado = numero;
                PopNumero( & numero);
                resultado = numero - resultado;
                PushNumero(resultado);
            }
        } else {
            if (operador == '/') {
                PopNumero( & numero);
                resultado = numero;
                PopNumero( & numero);
                resultado = numero / resultado;
                PushNumero(resultado);
            } else if (operador == '*') {
                PopNumero( & numero);
                resultado = numero;
                PopNumero( & numero);
                resultado = numero * resultado;
                PushNumero(resultado);
            }
        }
    }
}

bool find(char letra, char * str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letra) {
            return true;
        }
    }
    return false;
}

void stringParaVetor(char * line, char vetor[][20], int tamanho) {
    char trab[tamanho];
    char operacoes[] = "+-*/()";
    char letra;
    bool numero = false;
    bool str = false;
    int vetorI = 0;
    int aux = 0;
    strcpy(trab, "");

    for (int i = 0; i < tamanho; i++) {
        letra = line[i];
        if ((isdigit(letra) || letra == '.') && !str) {
            if (!numero) {
                if (strlen(trab) != 0) {
                    strcpy(vetor[vetorI++], trab);
                    strcpy(trab, "");
                }
                numero = true;
                str = false;
            }
            aux = strlen(trab);
            trab[aux] = letra;
            trab[aux + 1] = '\0';
        } else if (letra == ' ') {
            if (!str) {
                if (strlen(trab) != 0) {
                    strcpy(vetor[vetorI++], trab);
                    strcpy(trab, "");
                    numero = false;
                    str = false;
                }
            }
        } else if (find(letra, operacoes) != 0) {
            if (strlen(trab) != 0) {
                strcpy(vetor[vetorI++], trab);
                strcpy(trab, "");
            }
            aux = strlen(trab);
            trab[aux] = letra;
            trab[aux + 1] = '\0';
            strcpy(vetor[vetorI++], trab);
            strcpy(trab, "");
            numero = false;
            str = false;
        }
    }
    if (strlen(trab) != 0) {
        strcpy(vetor[vetorI++], trab);
    }
}

bool CheckPrecedencia(char operador1) {
    switch (operador1) {
    case '*':
    case '/':
        return false;
        break;
    case '+':
    case '-':
        return true;
        break;
    default:
        return false;
    }
}

bool PushOperador(char * valor) {
    if (posicao_operador == TAMANHO) {
        return false; // CONDIÇÃO: PILHA DE OPERADORES CHEIA
    }
    strcpy(pilha_operador[posicao_operador], valor);
    posicao_operador++;
    return true;
}

bool PushNumero(double valor) {
    if (posicao_numero == TAMANHO) {
        return false; // CONDIÇÃO: PILHA DE NÚMEROS CHEIA
    }
    pilha_numero[posicao_numero] = valor;
    posicao_numero++;
    return true;
}

bool PopOperador(char * valor) {
    if (posicao_operador == 0) {
        return false; // CONDIÇÃO: PILHA DE OPERADORES VAZIA
    }
    posicao_operador--;
    strcpy(valor, pilha_operador[posicao_operador]);
    return true;
}

bool PopNumero(double * valor) {
    if (posicao_numero == 0) {
        return false; // CONDIÇÃO: PILHA DE NUMEROS VAZIA
    }
    posicao_numero--;
    * valor = pilha_numero[posicao_numero];
    return true;
}

bool CheckOperadorVazio() {
    return posicao_operador == 0;
}

bool CheckNumeroVazio() {
    return posicao_numero == 0;
}

double MostrarResultado() {
    if (CheckNumeroVazio()) {
        return 0;
    } else {
        return pilha_numero[posicao_numero - 1];
    }
}