#include <stdio.h>
#include <math.h>
/*
    Desenvolva um algoritmo para calcular as raízes de uma equação do 2º grau (Ax²+ Bx + C), sendo que os
    valores A, B e C são fornecidos pelo usuário.
*/

int main(){
    float a, b, c, x1, x2, delta;

    printf("A = ");
    scanf("%f", &a);
    
    printf("B = ");
    scanf("%f", &b);
    
    printf("C = ");
    scanf("%f", &c);

    delta = b * b - 4*a*c;

    x1 = (-b + sqrt(delta)) / (2*a); 
    x2 = (-b - sqrt(delta)) / (2*a); 
    
    printf("x1 = %.2f e x2 = %.2f", x1, x2);
}