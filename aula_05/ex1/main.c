#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);
    if(num >= 0){
        printf("Seu numero eh maior que zero");
    } else{
        printf("Seu numero nao eh maior que zero");
    }
    return 0;
}
