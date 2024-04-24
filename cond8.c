#include <stdio.h>

/*
    Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for maior que
    20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
*/

int main() {
    int prestacao;
    float emprestimo, salario, salario_20;

    printf("Informe seu salario: ");
    scanf("%f", &salario);

    printf("Informe o valor do emprestimo: ");
    scanf("%f", &emprestimo);

    printf("Informe a prestacao: ");
    scanf("%d",&prestacao);


    salario_20 = salario*0.20;


    if(prestacao > salario_20){
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }
}