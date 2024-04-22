#include <stdio.h>

/*
    Você viajou para os Estados Unidos e descobriu que lá a unidade de medida de temperatura é diferente
    da do Brasil. Para não ter que acessar um serviço na internet a todo o momento, nem fazer os cálculos
    manualmente, faça um algoritmo que converte a temperatura, dada uma unidade de medida e uma
    temperatura. Ou seja, se a temperatura for informada em Celsius o algoritmo deve fornecer a temperatura em
    Fahrenheit, já se a temperatura for fornecida em Fahrenheit, o resultado deve ser em graus Celsius.
*/

int main() {
    int unidade;
    float temp_f, temp_c, convert;
    
    printf("Qual a unidade quer converter 1 (F -> C) ou 2 (C -> F): ");
    scanf("%d", &unidade);

    printf("Digite a temperatura: ");
    scanf("%f", &convert);

    if (unidade == 1) {
        temp_c = (convert - 32)/1.8; 
        printf("A temperatura convertida é: %.2f C ", temp_c);
    } else if (unidade == 2){
        temp_f = (convert * 1.8) + 32;
        printf("A temperatura convertida é: %.2f F ", temp_f);

    }
}