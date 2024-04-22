#include <stdio.h>

/*
    Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida
    respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de
    camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor
    arrecadado.
*/

int main(){
    int user, camisa_p, camisa_m, camisa_g, total;

    printf("Quantas camisetas P? ");
    scanf("%d", &camisa_p);

    printf("Quantas camisetas M?  ");
    scanf("%d", &camisa_m);

    printf("Quantas camisetas G?  ");
    scanf("%d", &camisa_g);

    total = (camisa_p*10) + (camisa_m*12) + (camisa_g*15);

    printf("Total a pagar: R$ %d", total);
}