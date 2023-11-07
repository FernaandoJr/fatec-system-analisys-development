#include <stdio.h>

/*
Faça um programa que receba o mês e diga quantos dias ele
possui (fevereiro = 28).
*/

int main() {
    int mes;
    int dias;
    printf("1 - Janeiro\n");
    printf("2 - Fevereiro\n");
    printf("3 - Marco\n");
    printf("4 - Abril\n");
    printf("5 - Maio\n");
    printf("6 - Junho\n");
    printf("7 - Julho\n");
    printf("8 - Agosto\n");
    printf("9 - Setembro\n");
    printf("10 - Outubro\n");
    printf("11 - Novembro\n");
    printf("12 - Dezembro\n");
    printf("Digite o numero que corresponda ao mes: ");
    scanf("%d", &mes);

    if(mes < 1 || mes > 12){
        printf("Mes invalido!");
    } else{
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
            dias = 31;
        } else if(mes == 2){
            dias = 28;
        } else {
            dias = 30;
        }
        printf("Dias: %d",dias);
        return 0;
    }
    }
