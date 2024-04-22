#include <stdio.h>

/*
    A empresa Hipotheticus paga R$30,00 por hora normal trabalhada, e R$60,00 por hora extra. Faça um
    algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado funcionário.
    Considere que o salário líquido é igual ao salário bruto descontando-se 10% de impostos.
*/

int main(){
    float sal_bruto, sal_liquido, imposto;
    int h_normal, h_extra;

    imposto = 0.1;

    printf("Digite quantas horas normais vc trabalhou: ");
    scanf("%d", &h_normal);

    printf("Digite quantas horas extras vc trabalhou: ");
    scanf("%d", &h_extra);


    sal_bruto = (30 * h_normal) + (60 * h_extra);
    sal_liquido = sal_bruto - (sal_bruto * imposto);


    printf("Salario liquido final: $%.2f", sal_liquido);

}