#include <stdio.h>

/*
Faça um algoritmo que leia tantos números quanto o usuário desejar e imprima a soma deles.
*/

int main(){
    float venda, vendas = 0;
    int i, quantidade;

    printf("Quantas vendas no dia: ");
    scanf("%d", &quantidade);

    i = 1;
    while(i <= quantidade){
        printf("Venda: ");
        scanf("%f", &venda);
        vendas += venda;
        i++;
    }
    
    printf("Total de vendas: R$%.1f", vendas);
}