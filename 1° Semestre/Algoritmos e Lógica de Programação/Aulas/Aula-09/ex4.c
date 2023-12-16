#include <stdio.h>

/*
Faça um programa que mostre o seguinte menu na tela e resolva as
operações conforme o usuário seleciona-las:
1. Soma
2. Subtração
3. Divisão
4. Multiplicação
5. Sair
*/

int main() {
    int menu = 0;
    float n1,n2;
    printf("Digite 2 numeros: ");
    scanf("%f%f",&n1,&n2);

    while (menu != 5){
        printf("Escolha uma das operacoes: \n");
        printf("1. Soma\n"
               "2. Subtracao\n"
               "3. Divisao\n"
               "4. Multiplicacao\n"
               "5. Sair\n");
        scanf("%d",&menu);
        switch (menu) {
            case 1:
                printf("Resultado: %.2f\n\n",n1 + n2);
                break;
            case 2:
                printf("Resultado: %.2f\n\n",n1 - n2);
                break;
            case 3:
                printf("Resultado: %.2f\n\n",n1 / n2);
                break;
            case 4:
                printf("Resultado: %.2f\n\n",n1 * n2);
                break;
            case 5:
                break;
        }
            if (menu == 5){
                break;
            }
    }
    return 0;
}