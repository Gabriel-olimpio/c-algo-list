#include <stdio.h>

/*
    Faça um programa que calcule a quantidade necessária de latas de tinta para pintar uma parede. O
    programa pergunta a medidas de largura e altura da parede em metros e imprime o resultado (em latas de
    tinta). Considere que o consumo de tinta é de 500 ml por metro quadrado e a quantidade de tinta por lata
    é de 2 litros.
*/
int main(){
    float metro_q, latas, largura, altura;

    printf("Largura da parede: ");
    scanf("%f", &largura);

    printf("Altura da parede: ");
    scanf("%f", &altura);

    metro_q = largura * altura;

    latas = ((metro_q * 500)/1000)/2; 

    printf("A quantidade necessária é de: %.1f latas", latas);
}