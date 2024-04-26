#include <stdio.h>

/*
Leia dois vetores de 20 posições e calcule um terceiro vetor contendo, nas posições pares os valores do
primeiro e nas posições impares os valores do segundo.
*/

int main(){
    int i, v1[20], v2[20], v3[20];

    // leitura vetor 1
    for(i = 0; i <= 19; i++){
        printf("v1: ");
        scanf("%d", &v1[i]);

    }

    // leitura vetor 2
    for(i = 0; i <= 19; i++){
        printf("v2: ");
        scanf("%d", &v2[i]);

    }

    // Pos par -> v1; Pos imp -> v2
    for(i = 0; i <= 19; i++){
        if(i % 2 == 0){
            v3[i] = v1[i];
        } else {
            v3[i] = v2[i];

        }
    }

    // print v3
    printf("v3: ");
    for(i = 0; i <= 19; i++){
        printf("%d ", v3[i]);
    }
    
}