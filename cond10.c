#include <stdio.h>

/*
Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = (base_maior + base_menor * altura) /2
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/

int main(){
    int base_maior, base_menor, altura, area, resultado;

    printf("Digite a base maior: ");
    scanf("%d", &base_maior);

    printf("Digite a base menor: ");
    scanf("%d", &base_menor);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    if (base_maior > 0 && base_menor > 0){
        area = (base_maior + base_menor)* altura;
        resultado = area/2;
        printf("A area é: %d m2 ", resultado);
    } else {
        printf("Base maior e menor precisam ser maiores que 0");
    }
}