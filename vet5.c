#include <stdio.h>

/*
 Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui..
*/

int main(){
    int v[40], i, cont_par = 0;

    for (i = 0; i <= 39; i++){
        printf("Digite um valor para a posicao %d do vetor: ", i);
        scanf("%d", &v[i]);

        if(v[i] % 2 == 0){
            cont_par+= 1;
        }
    }
    printf("O vetor possui %d valores pares ", cont_par);
}