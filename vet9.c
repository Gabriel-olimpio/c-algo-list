#include <stdio.h>
#include <string.h>
/*
Leia dois vetores de 4 posições. Verifique e escreva se um é anagrama de outro. Ex: ARARA
ARARA – são anagramas
*/

int main(){
    int i, j, cont;
    char p1[4], p2[4];

    printf("Digite uma palavra de 4 char: ");
    scanf("%s", p1);

    printf("Digite outra palavra de 4 char: ");
    scanf("%s", p2);

    if(strlen(p1) == strlen(p2)){
        for(i = 0; i <= 3; i++){
           for(j = 0; i <= 3; j++){
                if(p1[i] == p2[j]){
                    cont++;
                    p2[j] = 0;
                    break;
                }
           } 
        }
        if(cont == strlen(p1)){
            printf("sao anagramas");
        } else{
            printf("nao sao anagramas");
        }

    } else {
        printf("nao sao anagramas");
    }

    
}