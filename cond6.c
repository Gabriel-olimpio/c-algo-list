#include <stdio.h>

/*
    Faça um algoritmo que, dado o valor total em reais e o número de prestações desejadas, calcule o valor
    de cada prestação. O número mínimo de prestações deve ser 12. Se o número de prestações for maior ou
    igual a 24, adicione 10% de juros ao valor total, se for maior ou igual a 36, adicione 15% de juros ao valor
    total.
*/

int main(){
    int prestacao;
    float valor, parcela, valor_juros;

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Digite o numero de prestacoes: ");
    scanf("%d", &prestacao);

    parcela = valor/prestacao;

    if (prestacao >= 24){
       valor_juros = (parcela*0.10) + parcela;
    } else if (prestacao >= 36){
        valor_juros = (parcela*0.15) + parcela;
    } else {
        valor_juros = parcela;
    }
    printf("Voce ira pagar R$ %.2f em %d vezes ", valor_juros, prestacao);
}