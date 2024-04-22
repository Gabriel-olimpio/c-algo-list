#include <stdio.h>

/*
Crie um algoritmo que, dado o nível de alerta de risco, imprima se ele for GRAVE. O nível de alerta é um
número que varia de 0 a 10. O nível é considerado GRAVE quando ele é superior a 9.
*/

int main(){
    int nivel;
    
    printf("Qual o nivel de alerta 0-10: ");
    scanf("%d", &nivel);

    if (nivel == 0 || nivel <= 5 ){
        printf("Ta tranquilo");

    } else if (nivel >= 6 || nivel <= 9){
        printf("Nao ta tranquilo");

    } else if (nivel == 10){
        printf("Ta GRAVE");
    } else {
        printf("Esse nivel nao existe (0-10)");
    }
}