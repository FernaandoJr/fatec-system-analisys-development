#include <stdio.h>
#include <math.h>

/*
NOME: FERNANDO DIVINO DE MORAES JUNIOR
  Atividade:
    MENU: Escolha a função a ser derivada e avaliada em x
    f(x) = x^k
    f(x) = ln(x)
    f(x) = sin(x)
    SAIR
    Ao escolher as opções, teremos as seguintes entradas e mensagens:
    Opção 1:
    Digite k:
    Digite x:
    Opções 2 ou 3:
    Digite x:
    A saída das opções 1 até 3 deverá ser:
    f1(valor_digitado) = valor encontrado
    Enquanto o usuário não digitar a opção 4, o MENU deverá continuar dando a
    possibilidade de executar um outro cálculo desejado.
*/



int main(void) {
  int menu;
  double x, k, resultado;

  do {
    printf("\nf(x) = x^k\n"
           "f(x) = ln(x)\n"
           "f(x) = sin(x)\n");
    printf("Escolha a função a ser derivada: ");
    scanf("%d", &menu);

    switch (menu) {
      
    case 1:
      printf("Digite k: ");
      scanf("%lf", &k);
      printf("Digite x: ");
      scanf("%lf", &x);

      if(x == 0 && x < 0){
        printf("Não existe derivada de f(x) = x^k para x = 0");
      } else{
        
        resultado = k * pow(x, k - 1);

        if(isnan(resultado)){
          printf("Não existe derivada de f(x) = x^k para k sendo número quebrado ou x sendo negativo par");
        } else{
        printf("f1(%.2lf) = %.2lf\n", x, resultado);
        }
      }
    
      break;
    case 2:

      printf("Digite x: ");
      scanf("%lf", &x);

      if(x == 0){
        printf("Não existe derivada de f(x) = ln(x) onde x = 0");
      } else{
        resultado = 1 / x;
        printf("f1(%.2lf) = %.2lf\n", x, resultado);
      }
      break;
    case 3:
      printf("Digite x: ");
      scanf("%lf", &x);

      resultado = cos(x);

      printf("f1(%.2lf) = %.2lf\n", x, resultado);
      
      break;
    case 4:
      printf("Saindo...");
      break;
    default:
      printf("Opção inválida\n");
      break;
    }
  } while (menu != 4);

  return 0;
}