#include <stdio.h>

// Declare um vetor de 10 posições e o preencha com os 10 primeiros números impares e o escreva.

int main(){
    int i, v[10], aux[10];
    
    for(i = 0; i <= 9; i++){
        printf("Digite um numero para a posicao %d ", i+1);
        scanf("%d", &aux[i]);

        if(aux[i] % 2 != 0){
            v[i] = aux[i];
        } else {
            v[i] = aux[i] + 1;
        }

    }
    for(i = 0; i<= 9; i++){
        printf("%d ", v[i]);
    }
}