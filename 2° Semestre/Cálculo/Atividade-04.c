#include <stdio.h>
#include <math.h>
#include <float.h>
/*
Nome: Fernando Divino de Moraes Júnior
    Atividade: 
        MENU: Escolha a função para calcularmos I = integral (a,b) f(x) dx:
        f(x) = x^k
        f(x) = 1/x
        f(x) = cos(x)
        SAIR
        Ao escolher as opções, teremos as seguintes entradas e mensagens:
        Opção 1:
        Digite k: 
        Digite a:
        Digite b:
        Opções 2 ou 3:
        Digite a:
        Digite b:
        A saída das opções 1 até 3 deverá ser:
        Integral(a; b) f(x) dx = valor encontrado
        Enquanto o usuário não digitar a opção 4, o MENU deverá continuar dando a possibilidade de executar um outro cálculo desejado. 
        Não se esquecer de apresentar uma mensagem de erro quando alguma condição não for válida.
*/

int main () {
    int menu;
    double x, k, resultado = 0.0;
    double a,b;
    double resultado_a = 0.0; 
    double resultado_b = 0.0; 
    int is_inf;

    do {
        printf( "\n1. f(x) = x^k\n"
                "2. f(x) = 1/x\n"
                "3. f(x) = cos(x)\n"
                "4. Sair\n");
        printf("Escolha a funcao a ser calculada a sua integral: ");
        scanf("%d", &menu);

        switch (menu) {
        case 1:
            printf("Digite k: ");
            scanf("%lf", &k);
            if(k == -1 ){
                printf("K nao pode ser igual a -1, tente novamente\n");
                return 0;
            }

            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            resultado_a = pow(a,k+1)/(k+1.0);
            resultado_b = pow(b,k+1)/(k+1.0);

            resultado = resultado_b - resultado_a;

            if(isinf(resultado) || isnan(resultado)){
                printf("A integral diverge, tente novamente\n");
            } else{
                printf("\nIntegral(%.2lf;%.2lf) f(x) dx = %.4lf\n", a, b, resultado);
            }

            break;
        case 2:
            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            resultado_a = log(a);
            resultado_b = log(b);
            resultado = resultado_b - resultado_a;

            if(isinf(resultado) || isnan(resultado)){
                printf("\nA integral diverge, tente novamente\n");
            } else{
                printf("\nIntegral(%.2lf;%.2lf) f(x) dx = %.4lf\n", a, b, resultado);
            }

            break;
        case 3:
            printf("Digite a: ");
            scanf("%lf", &a);

            printf("Digite b: ");
            scanf("%lf", &b);

            resultado_a = sin(a);
            resultado_b = sin(b);
            resultado = resultado_b - resultado_a;

            if(isinf(resultado) || isnan(resultado)){
                printf("A integral diverge, tente novamente\n");
            } else{
                printf("\nIntegral(%.2lf;%.2lf) f(x) dx = %.4lf\n", a, b, resultado);
            }

            break;
        case 4:
            printf("Saindo...");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (menu != 4);

    return 0;
}