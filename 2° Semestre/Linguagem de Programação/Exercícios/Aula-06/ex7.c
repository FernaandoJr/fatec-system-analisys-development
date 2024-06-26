#include <stdio.h>
/*
Sem usar a atoi, crie uma função que converta uma string numérica para
um valor inteiro.
*/

int stringToInt(char* str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Verifica o sinal negativo
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    // Itera por cada caractere da string
    while (str[i] != '\0') {
        // Converte o caractere para inteiro
        int digit = str[i] - '0';

        // Verifica se o caractere é um dígito válido
        if (digit >= 0 && digit <= 9) {
            // Multiplica o resultado por 10 e adiciona o dígito
            result = result * 10 + digit;
        } else {
            // Caractere inválido encontrado, retorna 0
            return 0;
        }

        i++;
    }

    // Aplica o sinal ao resultado
    result *= sign;

    return result;
}

int main() {
    char str[] = "1293123";
    int num = stringToInt(str);
    printf("Número convertido: %d\n", num);
    printf("Número convertido: %d - 1\n", num-1);

    return 0;
}
