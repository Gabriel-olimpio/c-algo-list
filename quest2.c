#include <stdio.h>

/*
    Codifique um programa que leia um número inteiro qualquer e imprima o seu sucessor e seu antecessor.
    A seguir, uma ilustração da entrada e da saída de uma execução do programa.
*/

int main(){
    int numero, sucessor, antecessor;

    printf("Digite seu numero: ");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("Numero: %d tem como antecessor o %d e sucessor %d", numero, antecessor, sucessor);

}
