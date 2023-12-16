#include <stdio.h>

/*
Faça um programa aonde o usuário tenha o menu abaixo. 
Se o usuário escolher a opção 1 o programa deve pedir dois número e fazer a soma, 
se o usuário escolher a opção 2 o programa deve pedir dois números e fazer a subtração, 
se o usuário escolher a opção 3 o sistema deve perguntar se ele tem certeza e só 
permitirá a saída do programa se o usuário digitar S. O programa deve emitir uma mensagem 
de erro para opções inválidas.
1 - Soma
2 - Subtração
3 - Sair
*/

int main () {
    int menu = 1;
    int num1,num2;
    int op;
    char resp;

    while (menu <= 3 && menu >= 1) {
        printf("\n1 - Soma""\n2 - Subtracao""\n3 - Sair\n");
        printf("Escolha uma das operacoes:\n");
        scanf("%d",&menu);

        switch (menu){
            case 1:
                printf("\nDigite 2 numeros: ");
                scanf("%d%d",&num1,&num2);
                op = num1 + num2;
                printf("\nResultado da operacao: %d\n",op);
                break;
            case 2:
                printf("\nDigite 2 numeros: ");
                scanf("%d%d",&num1,&num2);
                op = num1 - num2;
                printf("\nResultado da operacao: %d\n",op);
                break;
            case 3:
                printf("\nDeseja mesmo sair?\n");
                scanf(" %c",&resp);
                if(resp == 'S' || resp == 's'){
                    menu = 10;
                    break;
                }
                break;
            default:
                printf("opcao invalida");
                
        }
    }

    return 0;
}