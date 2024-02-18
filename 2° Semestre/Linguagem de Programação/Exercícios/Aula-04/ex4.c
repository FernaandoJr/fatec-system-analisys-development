#include <stdio.h>

/*
Elabore um programa que crie uma tabela de conversão de
temperaturas de Fahrenheit para Celsius. A tabela deve incluir temperaturas de O
a 100 graus Celsius, variando de 1 em 1 grau. Utilize a fórmula C° = (°F − 32) × 5/9
*/

int main () {
    int fahrenheit = 0;
    int celsius;
    printf("\n\tTabela de Conversão de Fahrenheit para Celsius\n");

    for(celsius = 0;celsius < 100;fahrenheit++){
        celsius = (fahrenheit - 32) * 5/9;
        printf("%d°F = %d°C\n",fahrenheit,celsius);
    }
    return 0;
}