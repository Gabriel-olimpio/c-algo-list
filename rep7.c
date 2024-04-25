#include <stdio.h>

/*
    Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares.
    Termine a leitura se o usuário digitar zero (0).
*/

int main(){
    int i, user, soma, media;

    while(1){

        if(user == 0){
            printf("Encerrando");
            break;
        }

        if(user % 2  == 0){
            soma += user;
            i++;
        }
    }

    media = soma/i;
    printf("A media dos numeros pares %.2f ", media);

}