#include <stdio.h>

/*
    Faça um programa que leia vários conjuntos de três valores reais e mostre para cada conjunto: sua soma,
    seu produto e sua média. O programa para quando um conjunto não entrar com seus valores em ordem
    crescente.
*/

int main(){
    int i;
    float v1, v2, v3, soma, produto, media;

    while(1){
        printf("Digite 3 valores em ordem crescente: ");
        scanf("%f %f %f", &v1, &v2, &v3);

        if(v1 > v2 || v2 > v3){
            printf("Ordem nao crescente");
            continue;
        } else {
            break;
        }

    }

    soma = v1 + v2 + v3;
    produto = v1 * v2 * v3;
    media = (v1 + v2 + v3)/3;

    printf("Soma: %.2f \nProduto: %.2f \nMedia: %.2f ", soma, produto, media);


}