#include <stdio.h>
 // ler um vetor de 16 posicoes e fazer os 8 primeiros virarem os 8 ultimos
int main(){
    int v[16], i, aux[8];

    for (i = 0; i <= 15; i++){
        printf("Digite um numero para a posicao %d", i+1);
        scanf("%d", &v[i]);

    }

    for (i = 0; i <= 7; i++){
        aux[i] = v[8 + i];  // vetores de baixo
        v[0 + i] = aux[i]; 
    }

    for (i = 0; i <= 15; i++){
        printf("%d, ", v[i]);
    }
}