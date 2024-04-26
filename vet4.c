#include <stdio.h>

/*
Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu programa devera fazer uma busca
do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.
*/


int main(){
    int v[20], x, i, j;

    // leitura do vetor
    for (i = 0; i <= 19; i++){
        printf("Digite um valor para a posicao %d do vetor: ", i+1);
        scanf("%d", &v[i]);    
    }
    // valor x para achar
    printf("Digite qual valor quer encontrar: ");
    scanf("%d", &x);

    // loop para encontrar o valor x
    i = 0;
    while(i<=19){
        if(x == v[i]){
        printf("O valor %d foi encontrado na posicao: %d", x, i);
        break;
        }
        i++;
    }
}
