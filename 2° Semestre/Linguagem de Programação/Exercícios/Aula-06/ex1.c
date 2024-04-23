#include <stdio.h>

float CalcSoma(float x1, float x2);
float CalcSubtracao(float x1, float x2);
float CalcMult(float x1, float x2);
float CalcDivisao(float x1, float x2);

int main (int argc, char *argv[]) {
    int input = 1;
    float x1,x2;

    printf("**********************\n");
    printf("* Calculadora Básica *\n");
    printf("**********************\n");

    while(input != 0){
    printf("Digite seu 1° número: \n");
    scanf("%f",&x1);
    printf("Digite seu 2° número: \n");
    scanf("%f",&x2);
    printf("Digite 1 - Adição\n");
    printf("Digite 2 - Subtração\n");
    printf("Digite 3 - Multiplicação\n");
    printf("Digite 4 - Divisão\n");
    printf("Digite 0 - Sair\n");
    printf("Escolha: \n");
    scanf("%d",&input);


    switch (input){
    case 1:
        CalcSoma(x1,x2);
        break;
    case 2:
        CalcSubtracao(x1,x2);
        break;
    case 3:
        CalcMult(x1,x2);
        break;
    case 4:
        CalcDivisao(x1,x2);
        break;
    default:
        break;
    }

    }
    return 0;
}

float CalcSoma(float x1, float x2){
    return x1 - x2;
}