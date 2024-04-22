#include <stdio.h>    

/*
    Escreva um algoritmo que leia a velocidade de um veículo em km/h, e então calcule e exiba na tela a
    velocidade convertida em m/s (metros por segundo). O algoritmo deve perguntar também qual a distância
    que o motorista deseja percorrer (em km) e informe quanto tempo irá levar uma viagem na velocidade
    média informada (km/h) no início do programa.
*/

int main(){
    float v_km, v_ms;
    int tempo, km;
    printf("Qual sua velocidade em km/h? ");
    scanf("%f", &v_km);
    
    printf("Qual distancia quer percorrer (km)? ");
    scanf("%d", &km);

    tempo = km/v_km;
    v_ms = v_km/3.6;

    printf("Sua velocidade em m/s: %.2f m/s \n", v_ms);
    printf("Voce percorrerá %dkm em: %d horas", km, tempo);
    

}
