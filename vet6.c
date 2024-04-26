#include <stdio.h>

/*
Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
*/

int main(){
    int i, v[40];

    for(i=0; i <= 39; i++){
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &v[i]);

        if(v[i] < 0){
            v[i] = 0;
        }

    }
    
    for(i=0; i <= 39; i++){
        printf("%d ", v[i]);
    }
}