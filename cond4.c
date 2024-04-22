#include <stdio.h>

// Crie um algoritmo que, dado três números informados pelo usuário, informe qual é o maior deles.

int main(){
    int user, n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);
    
    if (n1>n2 && n1>n3 ){
        printf("n1 eh o maior ");

    } else if (n2>n1 && n2>n3){
        printf("n2 eh o maior ");

    } else {
        printf("n3 eh o maior ");
    }

}