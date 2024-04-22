#include <stdio.h>

/*

    A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
    Cada pãozinho custa R$ 0,50 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
    com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total
    arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um
    algoritmo para ler as quantidades de pães e de broas, e depois calcular os dados solicitados.

*/

int main(){
    int pao, broa;
    float total, poupanca;

    printf("Quantos paes foram vendidos? ");
    scanf("%d", &pao);

    printf("Quantas broas foram vendidas? ");
    scanf("%d", &broa);

    total = (pao*0.50) + (broa*1.50);
    poupanca = total * 0.10;

    printf("Total de Vendas: R$%.2ff \nTotal na Poupanca: R$%.2f", total, poupanca);
}