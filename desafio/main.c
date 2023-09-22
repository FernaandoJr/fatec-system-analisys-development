#include <stdio.h>

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