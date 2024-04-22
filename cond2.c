#include <stdio.h>

/*
    Agora altere o algoritmo anterior de maneira que ele verifique também se o nível informado está entre
    0 e 10. Caso contrário uma mensagem de erro deve ser apresenta.
*/

int main(){
    int nivel;
    
    printf("Qual o nivel de alerta 0-10: ");
    scanf("%d", &nivel);

    if (nivel == 0 || nivel <= 5 ){
        printf("Ta tranquilo \nO nivel esta entre 0-5");

    } else if (nivel >= 6 || nivel <= 9){
        printf("Nao ta tranquilo \nO nivel esta entre 6-9");

    } else if (nivel == 10){
        printf("Ta GRAVE \nO nivel esta em 10");
    } else {
        printf("Esse nivel nao existe \nPrecisa estar entre 0-10");
    }
}