#include <stdio.h>
 // ler um vetor de 12 posicoes
int main(){
    int v[12], i, soma;

    for (i = 0; i <= 11; i++){

        printf("Digite o valor %d: ", i+1);
        scanf("%d", &v[i]);
        soma += v[i];
         
    }
 
    printf("A soma: %d", soma);

}