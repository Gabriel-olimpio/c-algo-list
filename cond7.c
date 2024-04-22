#include <stdio.h>

/*
    Faça um programa que receba dois números e mostre o maior. Se, por acaso, os dois números forem
    iguais, imprima a mensagem Números iguais.
*/ 

int main(){
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);
    
    if (n1>n2){
        printf("n1 eh maior");

    } else if(n2>n1){
        printf("n2 eh maior");
        
    } else if (n1 == n2){
        printf("sao iguais");
    }
}