#include <stdio.h>

/*
Acontecerá um campeonato de natação e devemos verificar em
qual categoria o atleta se encaixa. Ler a idade e decidir a
categoria conforme a regra:

▪ Infantil A – 5 a 7 anos
▪ Infantil B – 8 a 10 anos
▪ Juvenil A – 11 a 13 anos
▪ Juvenil B – 14 a 17 anos
▪ Sênior – 18 anos ou mais
*/

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