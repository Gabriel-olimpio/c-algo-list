#include <stdio.h>

/*
    Agora altere o algoritmo anterior de maneira que ele verifique os demais níveis de alerta. Considere: 0-
    3 é "BAIXO", maior que 3 até 6 "MÉDIO", maior que 6 até 9 "ALTO", para os demais casos é considerado
    "GRAVE".
*/


int main(){
    int nivel;
    
    printf("Qual o nivel de alerta 0-10: ");
    scanf("%d", &nivel);

    if (nivel == 0 || nivel <= 3 ){
        printf("Ta tranquilo \nO nivel esta entre 0-3");

    } else if (nivel > 3 || nivel <= 6){
        printf("Nao ta tranquilo \nO nivel esta entre 4-9");

    } else if (nivel > 6 || nivel <= 9){
        printf("Ta ALTO \nO nivel esta entre 7-9");
    } else {
        printf("Esse nivel é considerado GRAVE");
    }
}