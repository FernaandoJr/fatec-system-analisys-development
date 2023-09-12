#include <stdio.h>

int main(){
    int salario;
    int novo_salario;
    printf("Digite seu salário: ");
    scanf("%d", &salario);
    novo_salario = salario * 1.035;
    
    printf("Seu novo salário é %d", novo_salario);
    return 0;
}