#include <stdio.h>

/*
    Faça um programa que receba a idade de 20 pessoas e mostre quantas são maiores que 18 anos.
*/

int main(){
    int idade, maiores, user;

    while(idade <= 20){
        printf("Digita sua idade: ");
        scanf("%d", &user);

        if(user > 18){
            maiores++;
        }
        idade++;
    }
    printf("%d pessoas sao maiores de 18 anos", maiores);
}