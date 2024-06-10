#include <stdio.h>

float CalcSoma(float x1, float x2);
float CalcSubtracao(float x1, float x2);
float CalcMult(float x1, float x2);
float CalcDivisao(float x1, float x2);

int main (int argc, char *argv[]) {
    int input = 1;
    float x1,x2;

    printf("**********************\n");
    printf("* Calculadora Basica *\n");
    printf("**********************\n");

    while(input != 0){
        printf("Digite seu primeiro numero: ");
        scanf("%f",&x1);
        printf("Digite seu segundo numero: ");
        scanf("%f",&x2);
        printf("Escolha:\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d",&input);


    switch (input){
    case 1:
        printf("Resultado: %.2lf + %.2lf = %.2lf\n", x1,x2,CalcSoma(x1,x2));
        break;
    case 2:
        printf("Resultado: %.2lf / %.2lf = %.2lf\n", x1,x2, CalcSubtracao(x1,x2));
        break;
    case 3:
        printf("Resultado: %.2lf x %.2lf = %.2lf\n", x1,x2, CalcMult(x1,x2));
        break;
    case 4:
        printf("Resultado: %.2lf / %.2lf = %.2lf\n", x1, x2, CalcDivisao(x1,x2));
        break;
    default:
        printf("Tente novamente!\n");
        break;
    }

    }
    return 0;
}

float CalcSoma(float x1, float x2){
    return x1 + x2;
}
float CalcSubtracao(float x1, float x2){
    return x1 - x2;
}
float CalcMult(float x1, float x2){
    return x1 * x2;
}
float CalcDivisao(float x1, float x2){
    if(x2 == 0){
        printf("Nao e possivel dividir por zero!\n");
        return 0;
    } else{
        return x1 / x2;
    }
}