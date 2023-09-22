#include <stdio.h>

int main () {
    float salario_bruto, hora, aulas, desconto, salario_liquido, total_desconto;
    printf("Digite a quantidae e aulas dadas: ");
    scanf("%f", &aulas);
    printf("Digite o valor de horas trabalhadas: ");
    scanf("%f", &hora);
    printf("Digite o valor do desconto do INSS: ");
    scanf("%f", &desconto);

    salario_bruto = hora * aulas;
    total_desconto = (desconto / 100) * salario_bruto;
    salario_liquido = salario_bruto - total_desconto;

    printf("Salario bruto: %.2f\n", salario_bruto);
    printf("Salario líquido: %.2f\n", salario_liquido);
    
    return 0;
}