#include <stdio.h>

/*
    Faça um programa que leia as médias finais de vários alunos de uma turma e mostre a maior média, a
    menor média e a média aritmética da turma. O programa para quando encontrar uma média negativa.
*/

int main(){
    float media, m1, m2, m3;

    while(1){
        printf("Media 1: ");
        scanf("%f", &m1);

        printf("Media 2: ");
        scanf("%f", &m2);

        printf("Media 3: ");
        scanf("%f", &m3);


        if(m1 < 0 || m2 < 0 || m3 < 0){
            printf("Media negativa encontrada");
            break;
        }
        
        media = (m1 + m2 + m3)/3;
        printf("A media da turma: %.2f ", media);

        if(m1 > m2 && m1 > m3){
            printf("Media 1 e a maior media %.2f ", m1);

        }else if(m2 > m1 && m2 > m3){
        printf("Media 2 e a maior media: %.2f ", m2);

        } else if (m3 > m1 && m3 > m2 ) {
            printf("Media 3 e a maior media %.2f ", m3);

        } else {
            printf("As media sao iguais ");

        }


    }



}