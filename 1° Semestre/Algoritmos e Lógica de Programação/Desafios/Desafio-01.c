#include <stdio.h>

/*
Criar um programa que à partir da idade e peso do paciente calcule
a dosagem de um determinado medicamento e imprima a receita
informando quantas gotas do medicamento o paciente deve tomar
por dose. Considere que o medicamento em questão possui
500mg por ml, e que cada ml corresponde a 20 gotas.

▪ Adultos ou adolescentes desde 12 anos, inclusive, se tiverem
peso igual ou acima de 60 quilos devem tomar 1000mg; com
peso abaixo de 60 quilos devem tomar 875mg.

▪ Para crianças e adolescentes abaixo de 12 anos a dosagem é
calculada pelo peso corpóreo conforme a tabela demonstrada:
*/

int main () {
    int idade, gotas, dosagem = 25;
    float peso;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    if((idade >= 12) && (peso >= 60)){
        gotas = 1000 / dosagem;
    }else if(peso <= 60){
        gotas = 875 / dosagem;
    }
    if(idade < 12){
        if(peso >= 5 && peso <= 9){
            gotas = 125 / dosagem;
        } else if(peso >= 9.1 && peso <= 16){
            gotas = 250 / dosagem;
        } else if(peso >= 16.1 && peso <= 24){
            gotas = 375 / dosagem;
        } else if(peso >= 24.1 && peso <= 30){
            gotas = 500 / dosagem;
        } else if(peso > 30){
            gotas = 750 / dosagem;
        }
    }
    printf("Você deve tomar %d gotas (%dmg)", gotas, gotas * dosagem);
    return 0;
}