#include <stdio.h>

/*
Leia um vetor de 10 posições e verifique se existem valores iguais e os escreva.
*/

int main(){
    int v[5], i, j;

    // ler vetores
    for(i = 0; i<= 4; i++){
        printf("v1: ");
        scanf("%d", &v[i]);
    }

    // checar se possui iguais
    for(i = 0; i <= 4; i++){
        for(j = i+1; j <= 4; j++){

            if(v[i] == v[j]){
                printf("%d ", v[i]);
            }
        }
    }
}