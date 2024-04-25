#include <stdio.h>

/*
    A prefeitura de uma cidade fez uma pesquisa com 300 pessoas, coletando dados sobre o salário e o
    número de filhos. A prefeitura deseja saber:
• A média do salário dessas pessoas
• A média do número de filhos
• O maior salário
• A porcentagem de pessoas com salários até R$1000,00    
*/

int main(){
    int i, ate_1000, salario = 0, filhos = 0, soma_salario, soma_filhos, maior_salario = 0;
    float porcentagem_salario, media_filhos, media_salario;

    for (i = 0; i <= 3; i++){
        printf("Digite seu salario");
        scanf("%d", &salario);

        printf("Digite quantos filhos possui: ");
        scanf("%d", &filhos);

        if(salario <= 1000){
            ate_1000++;
        }

        if(salario > maior_salario){
            maior_salario = salario;
        }

        soma_salario += salario;
        soma_filhos += filhos;

    }

    media_salario = soma_salario/i;
    porcentagem_salario = (ate_1000/i)*100.0;
    media_filhos = soma_filhos/i;

    printf("Media de salario: %.2f reais \n", media_salario);
    printf("Media de filhos: %.2f \n", media_filhos);
    printf("Maior salario: %d \n", maior_salario);
    printf("Porcentagem de quem ganha ate 1000 reais: %.2f%% ", porcentagem_salario);
}
