#include <stdio.h>

int main () {
    int start, end, step, cont;
    printf("Digite o valor inicial (Sabendo que precisa ser menor do que o final): \n");
    scanf("%d", &start);
    printf("Digite o valor inicial (Sabendo que o valor precisa ser maior do que o final): \n");
    scanf("%d", &end);
    printf("Digite o intervalo do incremento: ");
    scanf("%d", &step);

    for (start; start <= end; start+=step){
        printf("%d\n",start);
    }
    return 0;
}