#include <stdio.h>
#include <string.h>
/*
Leia dois vetores de 4 posições. Verifique e escreva se um é anagrama de outro. Ex: ARARA
ARARA – são anagramas
*/

int main(){
    int i, j, cont, len1, len2;
    char p1[] = "arara", p2[] = "arara", temp;

    
    len1 = strlen(p1);
    len2 = strlen(p2);

    // checar se o tamanho é igual
    if(len1 != len2){
        printf("nao sao anagramas");
        return 0;
    }

    // ordenar a string
    for(i = 0; i<= len1 - 1; i++){
        for(j= i+1; j < len1; j++){
            if(p1[i] > p1[j]){
                temp = p1[i];
                p1[i] = p1[j];
                p1[j] = temp;

            }
            if(p2[i] > p2[j]){
                temp = p2[i];
                p2[i] = p2[j];
                p2[j] = temp;
            }
        }
    }


    // checar se as letras existem em ambas palavras
    for(i = 0; i < len1; i++){
        if(p1[i] != p2[i]){
            printf("nao sao anagramas");
            return 0;
        }
    }
    printf("sao anagramas");
    return 0;
 
    
}