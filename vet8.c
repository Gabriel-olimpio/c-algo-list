#include <stdio.h>

/*
Leia um vetor de 40 posições e acumule os valores do primeiro elemento no segundo, deste no terceiro
e assim por diante. Ao final, escreva o vetor obtido.
*/

int main(){
    int v1[40], soma, i;

    for(i = 0; i <= 39; i++){
        printf("v1: ");
        scanf("%d", &v1[i]);
    } 

    for(i = 0; i <= 39; i++){
        soma += v1[i];
        v1[i] = soma;
    }

    printf("vetor novo: ");
    for(i = 0; i <= 39; i++){
        printf("%d ", v1[i]);
    } 

}