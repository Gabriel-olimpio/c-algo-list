#include <stdio.h>

/*
Escrever um algoritmo que leia uma quantidade de números definida pelo usuário final e conte quantos
deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve terminar
quando for lido um número negativo.
*/

int main(){
    int i, vendas, user, venda_ruim= 0, venda_media= 0, venda_boa= 0, venda_excelente= 0;

    printf("Quantas vendas? ");
    scanf("%d", &vendas);

    for (i = 0; i <= vendas; i++){
        printf("Qual a nota da venda %d? ", i);
        scanf("%d", &user);

        if (user >= 0 && user <= 25){
            venda_ruim += 1;

        } else if (user >= 26 && user <= 50){
            venda_media += 1;
            
        } else if (user >= 51 && user <= 75){
            venda_boa += 1;

        } else if (user >= 76 && user <= 100){
            venda_excelente += 1;

        }
    }
    printf("Vendas Ruins: %d \n Vendas Medias: %d \n Vendas Boas: %d \n Vendas Excelentes: %d ", venda_ruim, venda_media, venda_boa, venda_excelente);
}