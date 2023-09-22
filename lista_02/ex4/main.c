#include <stdio.h>

int main() {
    float salario;
    float prest;
    printf("Digite o valor do seu salario bruto: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &prest);

    if(prest > (.3 * salario)){
        printf("nao foi possivel o imprestimo!");
    } else{
        printf("foi possivel o imprestimo!");
    }
    return 0;
}
