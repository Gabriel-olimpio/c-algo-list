#include <stdio.h>

/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes fórmulas (onde h corresponde a altura):
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7
*/


int main(){
    int sexo;
    float altura, peso_ideal;

    printf("1 Masculino, 2 Feminino");
    scanf("%d", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if (sexo == 1){
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal seria: %.2f ", peso_ideal);
    } else if (sexo == 2){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal seria: %.2f ", peso_ideal);
    }

}