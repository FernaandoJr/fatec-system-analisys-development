#include <stdio.h>

int main () {
    int idade;

    printf("Digite a sua idade :\n");
    scanf("%d", &idade);

    if(idade >= 0){
        if((idade >= 5) && (idade <= 7)){
        printf("Categoria Infantil A!\n\n");
    } else if((idade >= 8) && (idade <= 10)){
        printf("Categoria Infantil B!\n\n");
    } else if((idade >= 11) && (idade <= 13)){
        printf("Categoria Juvenil A!\n\n");
    } else if((idade >= 14) && (idade <= 17)){
        printf("Categoria Juvenil B!\n\n");
    } else{
        printf("Categoria Sênior!\n\n");
    }
    } else{
        printf("Idade inválida!\n\n");
    }
    return 0;
}