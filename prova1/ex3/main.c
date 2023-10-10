#include <stdio.h>

int main() {
    int n1,n2;
    int resultado;
    int menu;
    printf("Digite dois numeros: \n");
    scanf("%d%d",&n1,&n2);
    printf("Digite um numero de 1 a 2\n""1 - soma\n""2 - subtracao\n");
    scanf("%d",&menu);

    switch (menu) {
        case 1:
            resultado = n1 + n2;
            break;
        case 2:
            resultado = n1 - n2;
            break;
        default:
            printf("Opcao invalida!");
    }

    printf("\nResultado: %d", resultado);
    return 0;
}